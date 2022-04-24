/*

exercise 3.1 - no array of pointers - simplified version

Gabriela Mira Dos Santos Martins

Write a program that reads x and prints it, passing all variables as parameters by
reference:

    x − 1       (1)
    x + 1       (2)
    x^2 + x − 2 (3)

*/

#include<iostream>
#include<math.h>
using namespace std;

void one    (int *);
void two    (int *);
void three  (int *);

int main(){

    int x = 0, xx = 0;
    cout << "Enter the value of x: ";
    cin >> x;
    xx = x;
    cout << "\n-------------------\n";
    one(&x);
    cout << "function 1 - result = " << x;
    x = xx;
    two(&x);
    cout << "\nfunction 1 - result = " << x;
    x = xx;
    three(&x);
    cout << "\nfunction 1 - result = " << x;
    cout << "\n-------------------\n";

    return 0;
}

void one (int *x){
    *x = *x - 1;
}
void two (int *x){
    *x = *x + 1;
}
void three(int *x){
    *x = pow(*x,2) + (*x - 2);
}