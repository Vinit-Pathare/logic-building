
#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    

    for ( iCnt= -iNo; iCnt<=0; iCnt++) ///O(N)
    {
        printf("%d\t",iCnt);
    }
    for ( iCnt= 1; iCnt <=iNo ; iCnt++) //O(N)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
    
}
//TIME COMPLEXITY : O(2N)


int main ()
{
    int iValue = 0;

    printf("enter the frequency :\n");
    scanf("%d",&iValue);
    Pattern(iValue);
    
    
    
    return EXIT_SUCCESS;
}