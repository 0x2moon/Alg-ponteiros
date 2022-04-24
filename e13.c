/*
exercise 12 - single version

Gabriela Mira Dos Santos Martins

Write a C program to calculate the sum of all elements of an array usingpointers.

*/

void start();
void sum(int *, int *,  int *);
void (*list_func[])(int *, int *,  int *) = {sum};


#include <stdio.h>

int main() { start(); return 0;}

void start(){
    int x, *v, sum = 0;
    printf("\nEnter vector size: ");
    scanf ("%d", &x);
    printf("\n");
    (*list_func[0])(&x, &v, &sum);
}

void sum(int *x, int *v, int *sum){
  
    v = (int *) malloc( *x *sizeof(int));
  
    if (x == NULL) { printf ("\n\n\nERROR!!!\n\n\n");}

    for (int i = 0; i < *x; i++)
        {
            v[i] = i*(*x+10);
            printf("\t v [ %d ] = %d \n", i, v[i]);
            *sum = *sum + v[i];
        }
    printf("\n\t vector sum = %d \n", *sum);
    
}