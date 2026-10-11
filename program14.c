#include "Header.h"

/////////////////////////////////////////////////////////////////////
//
// Entery point of function
/////


int main()
{


    int iValue1=0,iValue2=0,iResult=0;

    printf("enter first number : \n");
    if(scanf("%d",&iValue1) !=1)

    {
        fprintf(stderr,"unable to proceed as input is valid\n");

        return EXIT_FAILURE;
    }

    printf("enter second number : \n");
    if(scanf("%d",&iValue2) !=1)

    {
        fprintf(stderr,"unable to proceed as input is valid\n");

        return EXIT_FAILURE;
    }

    iResult = addition(iValue1,iValue2); 

    printf("addition is : %d\n",iResult);

    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////
//
//  step 5 : test the program

//  tested test cases
///////---------------------------------------
//////  input1      input2      output
/////-----------------------------------------
//////   10            11          21
//       11            0           11
//        0            11          11
//        20           -9          11   
//        -9           20          11
//       -20          -11         -31
//------------------------------------------------
//////////////////////////////////////////////////