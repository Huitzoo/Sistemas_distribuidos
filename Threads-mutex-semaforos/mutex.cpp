#include <iostream>
#include <unistd.h>
#include <thread>
#include <mutex>
using namespace std;
int variable = 0;
mutex m;

void incrementar(int veces){
    //cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
    //printf("id: %ld, %d \n",this_thread::get_id(),valor);
    
    for(int i = 0; i < veces; i++){
        m.lock();
        variable++;
        m.unlock();
    }
    sleep(1);
}

void decrementar(int veces){
    //cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
    //printf("id: %ld, %d \n",this_thread::get_id(),valor);
    
    for(int i = 0; i < veces; i++){
        m.lock();
        variable--;
        m.unlock();
    }
    
    //variable--;
    sleep(1);
}
int main(){
    thread th1(incrementar,100000000), th2(decrementar,100000000);
    cout << "Proceso principal espera que los hilos terminen\n";
    th1.join();
    th2.join();
    printf("var: %d\n",variable);
    exit(0);
}