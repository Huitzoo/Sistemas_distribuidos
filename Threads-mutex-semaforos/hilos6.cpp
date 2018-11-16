#include <iostream>
#include <unistd.h>
#include <thread>
#include <atomic>
using namespace std;
//int variable = 0;
//atomic<int> variable(0);

void incrementar(int veces,atomic<int> &var_local){
    //cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
    //printf("id: %ld, %d \n",this_thread::get_id(),valor);
    
    for(int i = 0; i < veces; i++){
        var_local++;
    }
    sleep(1);
}

void decrementar(int veces,atomic<int> &var_local){
    //cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
    //printf("id: %ld, %d \n",this_thread::get_id(),valor);
    
    for(int i = 0; i < veces; i++){
        var_local--;
    }
    
    //variable--;
    sleep(1);
}
int main(){
    atomic<int> var_local(0);
    thread th1(incrementar,100000000,ref(var_local)), th2(decrementar,100000000,ref(var_local));
    cout << "Proceso principal espera que los hilos terminen\n";
    th1.join();
    th2.join();
    //printf("var: %d\n",variable);
    cout << "Var: " << var_local << endl;
    exit(0);
}