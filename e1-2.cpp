/*
exercise 1.2 - array of pointers - complex version

Gabriela Mira Dos Santos Martins

Write a program that reads 10 numbers from the keyboard and finds their sum. Test
the program with several values ​​including:
1; 5, 17.3; -23,714; 12,947; 0.0005; -2,974; 3951, 44899
*/

#include <iostream>
using namespace std;
#define NUM_ADD 10

void start();
void sum_addition(float *, int );
void mult_addition(float *, int );
void div_addition(float *, int );
void (*list_func[])(float *, int ) = {sum_addition, mult_addition, div_addition};

int main()
    { start(); return 0;}

void start(){
    
    int i = 0, a = 0, ifunc = 0;
    float num = 0;

    do{

        cout << "----------------------------\n\tMENU\t\n----------------------------\n";
        cout << "1.\t sum_addition\n2.\tmult_addition\n3.\tdiv_addition\n";
        cout << "----------------------------\nEnter a number between 1 and 3: ";
        cin  >> i;
        if ((i == 1) || (i == 2) || (i == 3)){ a = 0;}
            else {cout << "\nNumber out of range, enter again.\n"; a = 1;}

    }while (a != 0);

    (*list_func[i-1])(&num, ifunc);
    
    cout << "\n----------------\nResult = ";
    cout << num; 
    cout << "\n----------------\n\n";

}

void sum_addition( float *ptr_num, int i){
    float p = 0;
        if (i < NUM_ADD)
            {
                cout << "Enter the number " << i+1 << ": ";
                cin >> p; *ptr_num += p; i++;
                sum_addition(ptr_num, i);
            }
}

void mult_addition( float *ptr_num, int i){
    float p = 0;
        if (i < NUM_ADD)
            {
                cout << "Enter the number " << i+1 << ": ";
                cin >> p; *ptr_num += (p * 2); i++;
                mult_addition(ptr_num, i);
            }
}

void div_addition( float *ptr_num, int i){
    float p = 0;
        if (i < NUM_ADD)
            {
                cout << "Enter the number " << i+1 << ": ";
                cin >> p; *ptr_num += (p / 2); i++;
                div_addition(ptr_num, i);
            }
}