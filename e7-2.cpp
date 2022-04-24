/*
exercise 1.2 - array of pointers - complex version

Gabriela Mira Dos Santos Martins

Write a function that receives as parameters a vector of integers v, the number of its elements N and pointers to variables in which the maximum values ​​should be stored
and minimum of the vector. Your signature must be:

void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

//utilizado new da linguagem c++
#include <iostream>
#include <random>

using namespace std;

void start();
void printf(int *v, int N, int *maximo, int *minimo);
void maximoMinimo(int *v, int N, int *maximo, int *minimo);
void (*list_func[]) (int *, int, int *, int *) = {maximoMinimo, printf};

int main() 
    { start(); return 0;}

void start(){
    int N, *v, max, min;
    cout << "\tEnter the value of N: " ;
    cin  >> N;
    (*list_func[0]) (v, N, &max, &min);
}

void printf(int *v, int N, int *maximo, int *minimo){

        cout << "\n\t--------------------------------------------------------------------------------------------------------\n";
        for (int i = 0; i < N; i++){   
        cout << "\t|\t" << v[i]; }
        cout << "\n\t--------------------------------------------------------------------------------------------------------\n\n";
        cout <<"\t" << *minimo << " <= Minimo | Maximo => "<< *maximo << "\n\n";

}

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
    
    v = new int;
    if (v == NULL)
        {cout << "\n\n\nERROR!!!\n\n\n";}

        random_device g;   
        mt19937 gen(g()); 
        uniform_int_distribution<> dist(1-N,N*N);


    for (int i = 0; i < N; i++)
        {
            v[i] = dist(gen); *maximo = v[i]; *minimo = v[i];
        }
    
    for (int i = 0; i < N; i++)
        {
           if ( *minimo > v[i] ) { *minimo = v[i];}  
           if ( *maximo <= v[i] ) {*maximo = v[i];}
        }
    
    (*list_func[1]) (v, N, maximo, minimo);
    
    delete [] v;



}