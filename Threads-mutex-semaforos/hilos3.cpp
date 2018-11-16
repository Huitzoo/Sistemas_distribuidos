#include <iostream>
#include <unistd.h>
#include <thread>
using namespace std;
int variable = 0;

void incrementar(){
    //cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
    //printf("id: %ld, %d \n",this_thread::get_id(),valor);
    variable++;
    sleep(1);
}

void decrementar(){
    //cout<<"Hilo " << this_thread::get_id() << " Valor recibido: " << valor << endl;
    //printf("id: %ld, %d \n",this_thread::get_id(),valor);
    variable--;
    sleep(1);
}
int main(){
    thread th1(incrementar), th2(decrementar);
    cout << "Proceso principal espera que los hilos terminen\n";
    th1.join();
    th2.join();
    printf("var: %d",variable);
    exit(0);
}