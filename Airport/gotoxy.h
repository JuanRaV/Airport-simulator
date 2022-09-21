#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED
#include <iostream>
#include <windows.h>
#include <ctime>

void gotoxy(int x,int y) {
    HANDLE hcon;
    hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.X = x;
    dwPos.Y= y;
    SetConsoleCursorPosition(hcon,dwPos);
    }

void HideCursor(){
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible=FALSE;
    cursor.dwSize=sizeof(cursor);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle,&cursor);
    }

#endif // GOTOXY_H_INCLUDED
