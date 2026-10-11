

#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////////////////////
//
// Fuction name : addition
// input        : integer,integer
// output       : integer
//description    : perform addition
// date          : 4/10/2026
// author        : Vinit Navnath Pathare
//
//////////////////////////////////////////////////////////////////////////

int addition(
                int ino1, //First input
                int ino2 //second input
            )
{
    int ians = 0;

    ians = ino1 + ino2;  // busines logic

    return ians;
}
//////////////////////////////////////////////////////////////////////////
//
// Entery point of function
/////


int main()
{


    int iValue1=0,iValue2=0,iResult=0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);

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