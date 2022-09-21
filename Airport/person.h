#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <random>
#include <chrono>
#include "gotoxy.h"
#include "string"
#include <functional>
#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

class Person{
    private:
        int id;
        int bags;
        string name;
        bool ban;
    public:

        Person();

        void setId(int);
        void setName(string);

        int getId();
        string getName();

        void setBags();
        int getBags();

        int pos;


        ///Animation
        void queueUp(int);
        static void queueOut(int);

};

Person::Person()
{
    ban=true;
    setBags();
}
void Person::setName(std::string n)
{
    this->name=n;
}

void Person:: setBags(){

    std::uniform_int_distribution<int> distribution(1,15);
    unsigned seed = std::chrono::steady_clock::now().time_since_epoch().count();
    std::default_random_engine generator(seed);


   bags=distribution(generator);
}
int Person::getBags(){
    return bags;
}
void Person::setId(int id)
{
    this->id=id;
}

int Person::getId()
{
    return id;
}

string Person::getName()
{
    return name;
}

using namespace std;

void Person::queueUp(int x)
{
    HideCursor();
    gotoxy(x,9);cout<<"  "<<id;
    gotoxy(x,10);cout<< "  0";
    gotoxy(x,11); cout<< " /|\\";

    if(x%5==0){

        gotoxy(x,12);cout<<" / \\";
    }else{
        if(ban){
            gotoxy(x,12); cout<< " / ";
			ban=false;
		}else{
			gotoxy(x,12); cout<< "   \\";
			ban=true;
		}
    }

    this->pos=x;
}

void Person::queueOut(int x)
{
    HideCursor();
    gotoxy(x,9);cout<<"      ";
    gotoxy(x,10);cout<< "     ";
    gotoxy(x,11); cout<< "     ";
    gotoxy(x,12); cout<< "     ";

}







#endif // PERSON_H_INCLUDED
