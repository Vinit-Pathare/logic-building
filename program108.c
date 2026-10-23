#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for (iCnt = 1; iCnt<= iNo/2;iCnt++)
    {
        if ((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt;
        }
        
    }
    if(iSum ==1)
    {
        return true;
    }
    else
    {
       return false;
    }
    
}

int main(void)
{
    int iValue = 0;
    bool bret = false;

    printf("enter number : \n");
    scanf("%d",&iValue);

     bret = CheckPrime(iValue);
    if(bret == true)
    {
        printf("prime number\n");
    }
    else
    {
        printf("it is not prime number\n");
    }

    return EXIT_SUCCESS;
}