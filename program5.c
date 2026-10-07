/*
step 1:  understand the problem statement ]
step 2:   write the algorithm
step 3:   decide the programming lang
step 4:   write thr program
step 5:   test the program


*/

/////////////////////////////////////////////////////////////////////////////////////
//
// step 1 :  understand the problem statement
//            user is going to enter any 2 integer
//             and we have to perform addition
///////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////////////
//
// step  :  write the algorithm
/*   
    start
          accept first number as no1
          accept first number as no2
          create the variable as ans to store the result
          perform the addition and store into ans
          display yhe result 


*/        
///////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
//
// step 3 :  decide the programming lang
//           we select c programming
///////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////////////////
//
// step 4 :  write thr program
//           
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main()
{

    int iValue1=0,iValue2=0,iResult=0;

    printf("enter first number : \n");
    scanf("%d",&iValue1);

    printf("enter second number : \n");
    scanf("%d",&iValue2);



    iResult = iValue1+iValue2;  //business logic

    printf("addition is : %d\n",iResult);

    return 0;
}