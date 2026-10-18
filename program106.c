
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Checkperfect(int iNo)
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
        return true;
    }
    else
    {
        return false;
    }
    return(iSum == iNo);
}


int main()

{

    int iValue = 0; 
    bool bret = false;
    
    
    printf(" enter the number : \n");
    scanf("%d",&iValue);

    bret = Checkperfect(iValue);

    if (bret == true)
    {
        printf("it is perfect number");
    }
    else
    {
        printf("it is not perfect number");
    }
    

    
    
     return EXIT_SUCCESS;

}
//time complexity : O(N/2)