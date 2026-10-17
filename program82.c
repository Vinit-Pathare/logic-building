// input : 10
// 1    3   7   9 


#include<stdio.h>
#include<stdlib.h>

int Summation(int iNo)
{

    int icnt = 0;
    int isum = 0;

    isum = 1;
    for(icnt =1; icnt <=iNo; icnt+=2)
    {
       isum = isum * icnt;
        
    }
    return isum;

}
int main()

{

    int iValue = 0;
    int iret = 0;
    printf(" enter the freq : \n");
    scanf("%d",&iValue);

     iret=Summation(iValue);

     printf("summation is : %d\n",iret);
     return EXIT_SUCCESS;

}