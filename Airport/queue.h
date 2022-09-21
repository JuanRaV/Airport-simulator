#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include "node.h"
#include "person.h"
#include "objects.h"
#include<iomanip>
#include <iostream>
#include <functional>
using namespace std;
class Queue {
    private:
        Node* head;
        Node* rear;
        int sizeQueue;
        int id;


    public:
        Queue() {
            this->head =NULL;
            this->rear = NULL;
            sizeQueue=0;
            id=0;
            };

        void enqueue(Person);
        void dequeue();
        Person getFront();
        Person getLast();

        bool isEmpty();

        void showNames();
        void mostrarInfo();

        ///Animation
        void mostrarCola(function <void()>);
        Queue* sacar();
        Queue* sacar1();
        void sacar2();

    };
void Queue::mostrarInfo(){
    cout<<left;
    cout << setw(10)<<"Id ";
    cout << setw(20)<<"| Nombre";
    cout << setw(10)<<"| Maletas";

    cout<<endl;
    cout<<"----------|-------------------|---------"<<endl;
    Node* aux(head);

    while(aux!=NULL) {
        cout << setw(10)<<aux->data.getId();
        cout <<"| "<< setw(18)<<aux->data.getName();
        cout <<"| "<< setw(10)<<aux->data.getBags();
        cout<<endl;
        aux=aux->next;
    }
}

void Queue::enqueue(Person e) {
    e.setId(++id);

    Node* ptr = new Node();
    ptr->data=e;
    ptr->next = NULL;

    if(head == NULL) {
        head=ptr;
        rear=ptr;
        }
    else {
        rear->next=ptr;
        rear=ptr;
        }

    sizeQueue++;
    }

void Queue::dequeue() {
    if(isEmpty()) {
        cout<<"La cola esta vacia"<<endl;
        }
    else if(head==rear) {
        delete(head);
        head=NULL;
        rear=NULL;
        }
    else {
        Node* ptr=head;
        head=head->next;
        delete(ptr);
        }

    sizeQueue--;
    }

Person Queue::getFront() {

    return head->data;

    }

Person Queue::getLast() {

    return rear->data;
    }

bool Queue::isEmpty() {
    return head == NULL and rear == NULL;
    }

void Queue::mostrarCola(function <void()> obj) {

    Node* show = NULL;
    show = head;
    int limit=95;


    while(show!=NULL) {

        for(int i=0; i<=limit; i++) {
            Sleep(20);
            show->data.queueUp(i);
            obj();
            }
        limit-=5;
        show=show->next;
        }

    }


Queue* Queue::sacar() {

    Queue *q = new Queue;
    Node* first=head;
    Node* second=head->next;


    while(!this->isEmpty())
    {
        while(second!=NULL){
            first->data.queueOut(94);
            for(int i=second->data.pos;i<=first->data.pos;i++){
                second->data.queueUp(i);
                Sleep(70);
            }
            first=first->next;
            second=second->next;
            Node *f=first;
            Node *s=second;

            while(s!=nullptr){
                for (int i=s->data.pos;i<=f->data.pos;i++){
                    s->data.queueUp(i);
                    Sleep(70);
                }
                s=s->next;
                f=f->next;
            }
        }
        q->enqueue(this->getFront());
        this->dequeue();}


    system("cls");

    return q;

    }
void Queue::sacar2(){
    Queue *q = new Queue;
    Node* first(head);
    Node* second(head->next);



    first->data.queueOut(94);
    if(!this->head->next==NULL){
        for(int i = second->data.pos; i <= first->data.pos; i++) {
            second->data.queueUp(i);
            Sleep(100);
            }

        first=first->next;
        second=second->next;
        Node* f=first;
        Node* s=second;
        while(s!=nullptr) {
            for(int i = s->data.pos; i<=f->data.pos-5; i++) {
                s->data.queueUp(i);
                Sleep(40);
                }
            s=s->next;
            f=f->next;
            }


            q->enqueue(this->getFront());
            this->dequeue();
    }else{
        first->data.queueOut(94);
        this->dequeue();
    }
}
void Queue::showNames() {

    Node* aux(head);

    while(aux!=NULL) {
        std::cout<<"nombre: "<<aux->data.getName()<<std::endl;
        aux=aux->next;
        }
    }






#endif // QUEUE_H_INCLUDED
