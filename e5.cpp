/*
exercise 5 - no array of pointers - simplified version

Gabriela Mira Dos Santos Martins

When visitors came to Bohr's house in Copenhagen, his wife always made a pastry.
of apple. For four people, this pastel needs:
675 g of apple;
75 g of butter;
150 g of sugar;
100 g of bread crumbs;
150 ml of sour cream.
Write a program that asks for the number of people who will eat at Bohr's house and
inform the amount of each ingredient required to make the apple pie.
*/

#include <iostream>
using namespace std;


struct  Bohr_house
{
    float apple, butter, sugar, breadCrumbs, sourCream;
}pie;

void print(float *,  Bohr_house *);
void calculation(float *,  Bohr_house *);

int main(){

    float quantityPeople = 0; 
    cout << "\n\tEnter number people: ";
    cin >> quantityPeople;
    calculation(&quantityPeople, &pie);
    return 0;
}

void calculation(float *x, Bohr_house *pie){

    (*pie).apple       = (675/4.00) * *x;
    (*pie).butter      = (75/ 4.00) * *x;
    (*pie).sugar       = (150/4.00) * *x;
    (*pie).breadCrumbs = (150/4.00) * *x;
    (*pie).sourCream   = (150/4.00) * *x;

    print(x, pie);

}


void print(float *x,  Bohr_house *pie){
    cout << "\n----------------------------------------------------------";
    cout << "\n\tQuantity for ";
    cout << *x;
    cout << " people ";

    cout << "\n----------------------------------------------------------\n";
    cout << "\tQuantity Apple ---------------" << (*pie).apple << endl;
    cout << "\tQuantity butter --------------" << (*pie).butter << endl;
    cout << "\tQuantity sugar ---------------" << (*pie).sugar << endl;
    cout << "\tQuantity breadCrumbs ---------" << (*pie).breadCrumbs << endl;
    cout << "\tQuantity sourCream -----------" << (*pie).sourCream;
    cout << "\n---------------------------------------------------------\n\n";


}