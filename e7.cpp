/*
exercise 1.1 - no array of pointers - simplified version

Gabriela Mira Dos Santos Martins

Write a function that receives as parameters a vector of integers v, the number of its elements N and pointers to variables in which the maximum values ​​should be stored
and minimum of the vector. Your signature must be:

void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

//utilizado malloc da linguagem c

#include <iostream>
#include <random>

using namespace std;

void maximoMinimo(int *v, int N, int *maximo, int *minimo);

int main(){
    int N, *v, max, min;

    cout << "\tEnter the value of N: " ;
    cin  >> N;
    maximoMinimo(v, N, &max, &min);
    return 0;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
    
    v = (int *) malloc(N*sizeof(int));

    if (v == NULL)
    {cout << "\n\n\nERROR!!!\n\n\n";}
    
    random_device g;   
    mt19937 gen(g()); 
    uniform_int_distribution<> dist(1-N,N*N);

    for (int i = 0; i < N; i++)
        {
            v[i] = dist(gen);
            cout << "\t"<< v[i] << " "; 
            *maximo = v[i];  
            *minimo = v[i];
        }
    
    for (int i = 0; i < N; i++)
        {
           if ( *minimo > v[i] ) { *minimo = v[i];}  
           if ( *maximo <= v[i] ) {*maximo = v[i];}
        }
    
    cout <<"\n\n\t" << *minimo << " <= Minimo | Maximo => "<< *maximo << endl;
    
    free(v);



}