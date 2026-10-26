#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    

    for (iCnt = 2; iCnt<= iNo/2;iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            return false;
        }
        
    }
    return true;
}

int main(void)
{
    int iValue = 0;
    bool bret = false;

    printf("enter number : \n");
    scanf("%d",&iValue);

     bret = CheckPrime(iValue);
    if(bret)
    {
        printf(" it is prime number\n");
    }
    else
    {
        printf("it is not prime number\n");
    }

    return EXIT_SUCCESS;
}