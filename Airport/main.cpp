#include <iostream>
#include <windows.h>
#include <ctime>
#include "person.h"
#include "queue.h"
#include "gotoxy.h"

using namespace std;
void noValor(){
    cout<<"Escriba un DIGITO"<<endl;
    system("pause");
}
bool ban(true);
void queueOut1(int x){
    gotoxy(x,21);cout<<"                                 ";
    gotoxy(x,22);cout<< "                                ";
    gotoxy(x,23); cout<< "                               ";
    gotoxy(x,24); cout<< "                                 ";
    gotoxy(x,25);cout<<"                                    ";
    gotoxy(x,26);cout<< "                                  ";
    gotoxy(x,27); cout<< "                                  ";
    gotoxy(x,28); cout<< "                                   ";
    gotoxy(x,29); cout<< "                                   ";
}
int main() {
    system("cls");
    HideCursor();
    string name;
    Queue* tickets = new Queue;
    Queue* mochilas = new Queue;
    Queue* taxi = new Queue;

    int opc, num;
    string nombre;
    char opc1[5],e1[5];
    do{
    system("cls");
    cout<<"-----AEROPUERTO-----\n"
        <<"1) Agregar Pasajeros\n"
        <<"2) Iniciar Viaje\n"

        <<"Seleccione una opcion: ";
    cin>>opc1;
    if(opc=atoi(opc1)){
    switch(opc) {
    case 1:
        cout<<"Ingresa el nombre: ";cin>>name;
        Person p;
        p.setName(name);

        tickets->enqueue(p);
        system("cls");system("cls");break;
    }}else
        noValor();
    }while(opc != 2);
    system("cls");
    tickets->mostrarCola(Objects::compra);
    mochilas = tickets->sacar();
    delete tickets;
    mochilas->mostrarInfo();
    //Sleep(80);
   mochilas->mostrarCola(Objects::abordar);
   taxi=mochilas->sacar();
    delete mochilas;

    Objects::city();
   for(int i = 0;i<95;i++){
    Objects::avion(i);
    Sleep(100);
   }
   system("cls");

    //Sleep(80);
    taxi->mostrarCola(Objects::stop);

    Objects::beach();

    while(!taxi->isEmpty()){
        for(int i = 0;i<95;i++){
            Objects::taxi(i);
            if(i==85)
                taxi->sacar2();
            Sleep(100);


        }
        queueOut1(90);
    }



    system("cls");
    system("pause");

    return 0;
    }
