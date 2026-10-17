#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{

    int icnt = 0;
    for(icnt =1; icnt <=ino; icnt++)
    {
        printf("jay ganesh...\n");
    }
}
int main()

{

    int iValue = 0;
    printf(" enter the freq : \n");
    scanf("%d",&iValue);
    Display(iValue);
    return EXIT_SUCCESS;
}