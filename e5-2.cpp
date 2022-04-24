/*
exercise 5 - array of pointers - complex version

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

struct  Bohr_house;
void start();
void print(float *,  Bohr_house *);
void calculation(float *,  Bohr_house *);
void (*list_func[])(float *, Bohr_house *) = {print, calculation};


struct  Bohr_house
{
    float apple, butter, sugar, breadCrumbs, sourCream;
}pie;

int main() {start();return 0;}

void start(){
    
    float quantityPeople = 0; 
    cout << "\n\tEnter number people: ";
    cin  >> quantityPeople;
    (*list_func[1])(&quantityPeople, &pie);

}

void calculation(float *x, Bohr_house *pie){
    
    (*pie).apple       = (675/4.00) * *x;
    (*pie).butter      = (75/ 4.00) * *x;
    (*pie).sugar       = (150/4.00) * *x;
    (*pie).breadCrumbs = (150/4.00) * *x;
    (*pie).sourCream   = (150/4.00) * *x;
    (*list_func[0])(x, pie);
 
}

void print(float *x,  Bohr_house *pie){

    cout << "\n----------------------------------------------------------";
    cout << "\n\tQuantity for " << *x << " people";

    cout << "\n----------------------------------------------------------\n";
    cout << "\tQuantity Apple ---------------" << (*pie).apple  << "g \n";
    cout << "\tQuantity butter --------------" << (*pie).butter << "g \n";
    cout << "\tQuantity sugar ---------------" << (*pie).sugar  << "g \n";
    cout << "\tQuantity breadCrumbs ---------" << (*pie).breadCrumbs << "g \n";
    cout << "\tQuantity sourCream -----------" << (*pie).sourCream   << "ml \n";
    cout << "\n---------------------------------------------------------\n\n";


}