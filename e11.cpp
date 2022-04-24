/*
exercise 11 - single version

Gabriela Mira Dos Santos Martins

TConsidering the value x = 3, 2 implement a code in C/C++ to determine the value
of the following functions

a) f(x) = x23 + x32 − x 10      |   b) f(x) = 15x2 − 10x
c) f(x) = (x − 2) 2(2x − 3)     |   d) f(x) = x2√x
e) f(x) = e −5x                 |   f) f(x) = −12 + 37 (e −x − 1)
g) f(x) = 13 sin(3x)            |   h) f(x) = 3 sin( 5π 3 x + π 10 )
i) f(x) = ln(x + 1)             |   j) f(x) = ln(ln(x))

*/

#include <iostream>
#include <math.h>
using namespace std;

void start();
void a(float *);
void b(float *);
void c(float *);
void d(float *);
void e(float *);
void f(float *);
void g(float *);
void h(float *);
void i(float *);
void j(float *);
void print(float *, int *);
void (*list_func[])(float *) = {a, b, c, d, e, f, g, h, i, j};

int main(){start(); return 0;}

void start(){
float x, xx;
cout << "\nEnter value of X: ";
cin >> x;
xx = x;
    for (int i = 0; i < 10; i++)
    {
        (*list_func[i])(&x);
        print(&x, &i);
        x = xx;
    }
    

}

void print(float *x, int *i){
    cout << "\n_______________________________________________________\n\n";
    cout << "\tResult of the equation " << *i+1 << "\n";
    cout << "\t\tX = " << *x << "\t\n";
    cout << "\n_______________________________________________________\n";

}

void a(float *x){
    //equação A
    float aux;
    aux = pow(*x,3) / 2;
    aux = aux + pow(*x,2) / 3;
    aux = aux - *x /  10;
    *x = aux;

}

void b(float *x){
    //equação B
    float aux;
    aux = 1 / (5 * pow(*x,2));
    aux = aux - (10 / *x);
    *x = aux;

}

void c(float *x){
    //equação C
    float aux;
    aux =  pow((*x-2),2);
    aux = aux * ((2 * *x ) - 3);
    *x = aux;

}

void d(float *x){
    //equação D
    float aux;
    aux =  sqrt(*x);
    aux =  *x / (2 * aux);
    *x = aux;

}

void e(float *x){
    //equação E (numero e = 2,71828)
    float aux;
    aux =  (-5 * *x);
    aux =  pow( 2.71828, aux );
    *x = aux;

}

void f(float *x){
    //equação F 
    float aux;
    aux = ( pow(2.71828, -*x) - 1);
    aux = aux * (3/7);
    aux = - 12 + aux; 
    *x = aux;

}

void g(float *x){
    //equação G
    float aux;
    aux = 3*(*x);
    aux = sin(aux);
    aux = (1/3) * aux;
    *x = aux;

}

void h(float *x){
    //equação H
    float aux;
    aux = ((5 * 3.1415) / 3)* *x;
    aux = aux + (3.1415/10);
    aux = 3 * (sin(aux));
    *x = aux;
}

void i(float *x){
    //equação I
    float aux;
    aux = log((*x + 1));
    *x = aux;
}

void j(float *x){
    //equação j
    float aux;
    aux = log(log(*x));
    *x = aux;
}
