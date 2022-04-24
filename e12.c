/*
exercise 12 - single version

Gabriela Mira Dos Santos Martins

What does the program below do? Write the same code using pointers

*/

#include <stdio.h>

void e12_program();
void e12_myversion();

int main()
{
    e12_program(); // exercise version
    printf("\n\n\nVersion with pointers\n");
    printf("------------------------------------------------------------\n\n");
    e12_myversion(); // my version

return 0;
}


void e12_program(){

    /*program explanation

        the proposed exercise, presents a program that creates
        a vector from the size defined by the user, then asks the user to
        set the value for each position, and print them.
    */

    int arr1[25], i,n;
    
    printf("\n\n Pointer : Store and retrieve elements from an array :\n");
    
    printf("------------------------------------------------------------\n");
    
    printf(" Input the number of elements to store in the array :");
    
    scanf("%d",&n);
    
    printf(" Input %d number of elements in the array :\n",n);
    
    for(i=0;i<n;i++)
        {
            printf(" element - %d : ",i);
            scanf("%d",arr1+i);
        }
    printf(" The elements you entered are : \n");
    
    for(i=0;i<n;i++){
        printf(" element - %d : %d \n",i,(arr1+i));
    }

}


void e12_myversion(){

    int *arr1,n;

    printf(" Input the number of elements to store in the array :");
    scanf("%d",&n);
    
     arr1 = (int *) malloc(n*sizeof(int));
     if (arr1 == NULL)
     {printf( "\n\n\nERROR!!!\n\n\n");}

     for(int i = 0;i < n;i++)
        {
            printf(" element - %d : ",i+1);
            scanf("%d", &arr1[i]);
        }
     printf(" \n\n The elements you entered are : \n\n");
     printf("------------------------------------------------------------\n\n");
    for(int i = 0;i < n; i++){
        printf(" element - %d : %d \n",i+1, arr1[i]);
    }

    free(arr1);
}