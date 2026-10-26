

//wrong
#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCnt = 0;
    float Average = 0.0f;

    while (iNo != 0)
    {
        iSum = iSum + iCnt;
        iCnt++;
    }
    
}



int main()
{
    int iValue = 0;
    int fRet = 0;

    printf("enter number :\n");
    scanf("%d",&iValue);

    fRet = AverageDigits(iValue);

    printf("Average of digit : %f\n",fRet);

    return EXIT_SUCCESS;
}