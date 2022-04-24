/*
exercise 1.1 - no array of pointers - simplified version

Gabriela Mira Dos Santos Martins

Write a program that reads 10 numbers from the keyboard and finds their sum. Test
the program with several values ​​including:
1; 5, 17.3; -23,714; 12,947; 0.0005; -2,974; 3951, 44899
*/


#include<iostream>
using namespace std;
#define NUM_ADD 10

void addition(float *);

int main(){
    float num = 0;
    addition(&num);
    cout << "\n----------------\n sum = " 
         << num << "\n----------------\n\n";
    return 0;
}

void addition( float *ptr_num){
    float p = 0;
        for (int i = 0; i < NUM_ADD; i++)
            {   
                cout<< "Enter the number " << i+1 << ": ";
                cin >> p;
                *ptr_num += p;
            }
}