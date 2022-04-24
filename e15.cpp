/*
exercise 17 - single version

Gabriela Mira Dos Santos Martins

Write a C/C++ program to find the reverse of a string using pointers.

*/

#include <iostream>
using namespace std;

void start();
void printf(char *, char *);
void printf_reverse(char *, char *);
void (*list_func[]) (char *, char *) = {printf, printf_reverse};

int main(){ start(); return 0;}

void start(){
    char string[] = {"Gabriela"};
    char *c  = string, *v; 
    (*list_func[0])(c, v);
}

void printf(char *c, char *v){
    v = c;
    cout <<"\nSTRING\n----------------------------\n";
    while (*c != '\0') {putchar (*c++);}
    cout <<"\n----------------------------\n";
    (*list_func[1])(c, v);
    
}

void printf_reverse(char *c, char *v){
    cout <<"\nREVERSE\n----------------------------\n";
    while (c >= v) {putchar (*c--);}
    cout <<"\n----------------------------\n";
}

