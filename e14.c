/*
exercise 14 - single version

Gabriela Mira Dos Santos Martins

The following snippet below writes the size of an array. Write the missing code for
the snippet works.

*/

#include <stdio.h>

void start();    
void e14_program();

int main(){ 
start();
return 0;}

void start(){
    char *str = {"Gabriela"}; int count = 0;
    e14_program( str, count);
}

void e14_program(char *str, int count){
    //code counts how many characters the str pointer presents
    while(*(str++) != '\0') count++;
    printf("Length of '%s' = %d", str, count);

}