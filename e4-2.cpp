/*
exercise 4 - array of pointers - complex version

Gabriela Mira Dos Santos Martins

The reduced mass of a molecule given by the expression
µ = ma*mb / ma + mb
Write a program that, once it calculates the given values ​​for ma and mb.
*/

#include <iostream>
#include <math.h>
using namespace std;

void start();
void print(float *, float *, float *);
void calculation(float *, float *, float *);
void (*list_func[])(float *, float *, float *) = {print, calculation};

int main(){start();return 0;}

void start(){
    float u = 0, mA = 0, mB = 0;
    
    cout << "Enter Mass value mA: ";
    cin >> mA;
    cout << "Enter Mass value mB: ";
    cin >> mB; 

    (*list_func[1])(&mA, &mB, &u);
    
}
void print(float *a, float *b, float *u){
    cout << "\n--------------------------------------\n";
    cout << "\tAtomic mass A: " << *a << endl;
    cout << "\tAtomic mass B: " << *b << endl;
    cout << "\tReduced mass : " << *u;
    cout << "\n--------------------------------------\n";
}
void calculation(float *a, float *b, float *u){
    
    *u = (*a * *b) / (*a + *b);
    (*list_func[0])(a, b, u);
   
}

