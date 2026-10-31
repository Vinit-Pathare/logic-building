
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    

    for ( iCnt= -iNo; iCnt<=iNo; iCnt++)//O(2N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
    
}
//TIME COMLEXITY 2(N)


int main ()
{
    int iValue = 0;

    printf("enter the frequency :\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    
    
    
    return EXIT_SUCCESS;
}