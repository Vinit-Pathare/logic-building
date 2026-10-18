
#include<stdio.h>
#include<stdlib.h>

int SumFactors(int iNo)
{
    int icnt = 0, iSum = 0;

   
    

    for (icnt = 1; icnt <= iNo/2; icnt++)
    {
        if ((iNo % icnt)==0)
        {
            iSum = iSum + icnt;
        }
        
    }
    return iSum;
}


int main()

{

    int iValue = 0, iRet = 0; 
    
    
    printf(" enter the number : \n");
    scanf("%d",&iValue);

    iRet= SumFactors(iValue);

    printf("Summation of factors : %d\n",iRet);
    
     return EXIT_SUCCESS;

}
//time complexity : O(N/2)