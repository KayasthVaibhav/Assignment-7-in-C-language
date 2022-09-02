//Write a Program to Print First N terms of Fibonacci Series ?//

#include <stdio.h>
#include <conio.h>

int main()
{
    int previous =0, current = 1, next =0, n, i;

    printf("Enter a Number\n");
    scanf("%d",&n);

    for( i = 0; i < n; i++)
    {
        next = previous + current ;
        printf("Print all Fibonnaci series N terms = %d\n ",next);

        previous = current ;
        current = next;
    }
    return 0;
}
//completed//
