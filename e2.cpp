/*
exercise 2 - single version

Gabriela Mira Dos Santos Martins

The following program calculates the factorial of a read num and calls a function for the
calculation:
[#include <iostream> using f = f * ...]
The program has some errors. Identify and correct them, so that the program works properly.
*/

#include <iostream>
using namespace std;
void findFact(int, int *);

int main()
    {
        int fact;
        int num1;
        printf("\n\n Pointer : Find the factorial of a given number :\n");
        printf("------------------------------------------------------\n");
        printf(" Input a number : ");
        scanf("%d", &num1);
        findFact(num1, &fact);
        printf(" The Factorial of %d is : %d \n\n", num1, fact);
        return 0;
    }

    void findFact(int n, int *f)
    {
        int i;
        *f = 1; // f is a pointer, so a * is missing
        for (i = 1; i <= n; i++)
        *f = *f * i; // f is a pointer, so a * is missing
    }

    //after correction the exercise works!