#include<stdio.h>
#include<stdlib.h>

float AverageDigit(int iNo)
{
    int iDigit = 0;
    int iSum =0;
    int iCount =0;
    float fAvg = 0.0f;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo!=0)
    {
    iDigit = iNo % 10;
    iSum = iSum+iDigit;
    iCount++;
    iNo = (iNo/10);
    }
    fAvg = (float)iSum/(float)iCount;         // need of type casting
    return fAvg;
}

    


int main ()
{
    int iValue = 0;
    float iRet = 0;
    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = AverageDigit(iValue);

    printf("Average of digit : %.2f\n",iRet);

    return EXIT_SUCCESS;
}