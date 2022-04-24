/*
exercise 1.1 - no array of pointers - simplified version

Gabriela Mira Dos Santos Martins

Halley's Comet is visible from Earth approximately every 76 years. His last appearance
it was in 1986. Write a program that prints the next 10 appearances of Halley's comet.
Store the years data in a vector. The vector must be passed as a parameter to the
next appearance calculation function.

*/

#include <iostream>
using namespace std;

#define YEARS 10

void halley(int *);
void print_Halley(int *);
void (*list_func[])(int *) = {halley, print_Halley};

int main()
{
    int list_years[YEARS];
    (*list_func[0])(list_years);
    return 0;
}

void halley(int *list_years)
{
    int y = 1986;
    for (int i = 0; i < YEARS; i++)
    {
        y += 76; 
        *(list_years +i) = y;
    }

    (*list_func[1])(list_years);

}

void print_Halley(int *list_years)
{
    cout << "------------------------------------" << endl;
    cout << "Halley's Comet----------------------" << endl;
    cout << "------------------------------------" << endl;

    for (int i = 0; i < YEARS; i++)
    {
        cout << "\tYear [ " << i+1 << " ]\t" 
             << *(list_years +i) << endl;
    }

    cout << "------------------------------------" << endl;
    cout << "Halley's Comet----------------------" << endl; 
    cout << "------------------------------------" << endl;

}

