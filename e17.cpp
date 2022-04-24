/*
exercise 17 - single version

Gabriela Mira Dos Santos Martins

Write a program to exchange two arrays using pointers
*/


#include <iostream>
#include <random>

using namespace std;

void start();
void two_arrays(int *, int *, int);
void swp1_2vs(int *, int *, int);
void print(int *, int *,int);
void (*list_func[])(int *, int *, int) = {two_arrays, swp1_2vs, print};

int main(){start(); return 0;}

void start(){

    int *v1, *v2, aux;
    cout << "\nNumber of vector positions: ";
    cin >> aux; 
    (*list_func[0])(v1, v2, aux);
    
}

void two_arrays(int *v1, int *v2, int aux){
    v1 = new int[aux];
    if (v1 == NULL)
    {cout << "\n\n\nERROR!!!\n\n\n";}
    
    v2 = new int[aux];
    if (v2 == NULL)
    {cout << "\n\n\nERROR!!!\n\n\n";}

    random_device g;   
    mt19937 gen(g()); 
    uniform_int_distribution<> dist(1-aux,aux*aux);
    
    for (int i = 0; i < aux; i++)
    {v1[i] = dist(gen); v2[i] = dist(gen);}
    (*list_func[1])(v1, v2, aux);

    delete [] v1; delete [] v2;

}

void swp1_2vs(int *v1 , int *v2, int aux) {
    
    (*list_func[2])(v1, v2, aux);
    int temp = 0;
    for (int i = 0; i < aux; i++)
    {
        temp  = v1[i];
        v1[i] = v2[i];
        v2[i] = temp;
    }
    (*list_func[2])(v1, v2, aux);

}

void print(int *v1, int *v2, int aux) {
    cout << "\n----------------------------------------------------------------------------------------------------------\n";
    cout << "\tVECTORS\n";
    cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
    for (int i = 0; i < aux; i++)
    {cout << "\tvector 1 [ " << i+1 << " ] = " << v1[i] << "    \t|\t   vector 2 [ " << i+1 << " ] = " << v2[i] << endl;}
    cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
  
}
