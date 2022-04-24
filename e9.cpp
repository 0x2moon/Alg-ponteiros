/*
exercise 9 - single version

Gabriela Mira Dos Santos Martins

TWhat does the following snippet do? Write it out completely by passing the values ​​of x and y through
reference.

void swp1(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}
*/

#include <iostream>
#include <random>

using namespace std;

void start();
void swp1(int, int);
void swp1_2vs(int *, int *);
void print(int *, int *);
void (*list_func[])(int *, int *) = {swp1_2vs, print};

int main(){start(); return 0;}

void swp1(int x,int y)
{
    int temp = x;
    x = y;
    y = temp;
}

//version made with pass-by-reference

void swp1_2vs(int *x, int *y){

    int temp = *x;
    *x = *y;
    *y = temp;

}
void print(int *x, int *y){
    cout << "\n_______________________________________________________\n\n";
    cout << "\tvisualization of variables\n";
    cout << "\n\t\tX = " << *x << "\tY = " << *y;
    cout << "\n_______________________________________________________\n";
}
void start(){
    int x, y;
    cout << "\n\tEnter the value of A: ";
    cin  >> x;
    cout << "\n\tEnter the value of B: ";
    cin  >> y;
    (*list_func[1])(&x, &y);
    cout << "\n\t\tChange of place\n";
    (*list_func[0])(&x, &y);
    (*list_func[1])(&x, &y);

}



