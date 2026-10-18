// input : 10
// 1    3   7   9 


#include<stdio.h>
#include<stdlib.h>

void Checkdivision(int iNo)
{

    if ((iNo % 3)==0)
    {
        printf("it is divisible\n");
        
    }else
    {
        printf("it is  not divisible\n");
    }
    
}
int main()

{

    int iValue = 0;
    
    printf(" enter the number : \n");
    scanf("%d",&iValue);

     Checkdivision(iValue);
     return EXIT_SUCCESS;

}