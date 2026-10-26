#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool CheckPallindrome(int iNo)
{
    
    
    int iDigit = 0, iRev = 0;

    while (iNo !=0)
    {
        iDigit = iNo %10;
        iRev = (iRev *10)+ iDigit;
        iNo = iNo /10;
    }
     if(iRev == 0)   //issue
     {
         return true;
     }
     else
     {
        return false;
     }
    
}


int main ()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);

    if(bRet == true)  
    {
        printf("it is pallindrome number\n ");
    }
    else
    {
        printf("it is not  pallindrome number\n ");
    }


    



    return EXIT_SUCCESS;
}