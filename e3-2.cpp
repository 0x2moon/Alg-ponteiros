/*

exercise 3.1 - array of pointers - complex version

Gabriela Mira Dos Santos Martins

Write a program that reads x and prints it, passing all variables as parameters by
reference:

    x − 1       (1)
    x + 1       (2)
    x^2 + x − 2 (3)

*/


#include <iostream>
#include <math.h>
using namespace std;

void start();
void one    (int *);
void two    (int *);
void three  (int *);
void (*list_func[])(int *) = { one, two, three};

int main(){
    start();
    return 0;
}

void start(){
    int x = 0, xx = 0;
    cout << "Enter the value of x: ";
    cin >> x;
    xx = x;
    for (int i = 0; i < 3; i++)
        {
            cout << "\n--------------------------------------\n";
            (*list_func[i])(&x);
            x = xx;   
        }
    cout << "\n--------------------------------------\n\n";
    
}

void one (int *x){
    *x = *x - 1;
    cout << "\tfunction 1 - result = " << *x;
}
void two (int *x){
    *x = *x + 1;
     cout << "\tfunction 1 - result = " << *x;
}
void three(int *x){
    *x = pow(*x,2) + (*x - 2);
     cout << "\tfunction 1 - result = " << *x;
}