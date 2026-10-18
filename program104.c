
#include<stdio.h>
#include<stdlib.h>

void Checkperfect(int iNo)
{
    int icnt = 0, iSum = 0;



   
    

    for (icnt = 1; icnt <= iNo/2; icnt++)
    {
        if ((iNo % icnt)==0)
        {
            iSum = iSum + icnt;
        }
        
    }
    if(iSum == iNo)
    {
        printf("it is perfect number");
    }
    else
    {
        printf("it is not perfect number");
    }
}


int main()

{

    int iValue = 0; 
    
    
    printf(" enter the number : \n");
    scanf("%d",&iValue);

     Checkperfect(iValue);

    
    
     return EXIT_SUCCESS;

}
//time complexity : O(N/2)