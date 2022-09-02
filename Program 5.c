//Write a program to check whether two given numbers are co-prime Number or not ..?//

#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, i, hcf=1;

    printf("Enter Two Numbers :\n");
    scanf("%d %d", &a,&b);
    int min = a < b ? a:b;

    for ( i=1; i<=min; i++)
    {
        if( (a %i == 0) && (b %i == 0))
            hcf =i;
    }
    if (hcf == 1)
    {
    printf(" Given two numbers is  Co-Prime ");
    }
    else{
    printf(" Given two numbers is not Co-Prime ");
    }
    return 0;
}


