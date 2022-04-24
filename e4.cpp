/*
exercise 4 - no array of pointers - simplified version

Gabriela Mira Dos Santos Martins

The reduced mass of a molecule given by the expression
µ = ma*mb / ma + mb
Write a program that, once it calculates the given values ​​for ma and mb.
*/

#include <iostream>
using namespace std;

void calculation(float *, float *, float *);

int main(){
    
    float u = 0, mA = 0, mB = 0;
    
    cout << "Enter Mass value mA: ";
    cin >> mA;

    cout << "Enter Mass value mB: ";
    cin >> mB; 

    calculation(&mA, &mB, &u);

    cout << "\nthe reduced mass: " << u << endl;

    return 0;

}

void calculation(float *a, float *b, float *u){

    *u = (*a * *b) / (*a + *b);

}
