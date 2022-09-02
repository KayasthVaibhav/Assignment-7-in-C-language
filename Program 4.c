//Write a  program to calculate HCF of two Numbers..?//

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

    printf( "HCF is %d",hcf);
    return 0;
}

