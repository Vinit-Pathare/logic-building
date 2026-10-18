/*
----------------------------------------------------
               operation &&
 ----------------------------------------------------              
result1       result2      final result
------------------------------------------------------
TRUE            TRUE           TRUE  
TRUE            FALSE          FALSE
FALSE           TRUE           FALSE      short circuit
FALSE           FALSE          FALSE      short circuit
---------------------------------------------------------
*/ 


#include<stdio.h>
#include<stdlib.h>

void Checkdivisible(int iNo)
{

    if (((iNo % 3)==0) &&  ((iNo % 5)==0))
    {
        printf("it is divisible\n");
        
    }
    else
    {
        printf("it is  not divisible\n");
    }
    
}
int main()

{

    int iValue = 0;
    
    printf(" enter the number : \n");
    scanf("%d",&iValue);

     Checkdivisible(iValue);
     return EXIT_SUCCESS;

}