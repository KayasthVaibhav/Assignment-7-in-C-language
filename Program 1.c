// Write a Program to find the Nth term of the Fabonnaci series..//

#include <stdio.h>
#include <conio.h>

int main()
{
    int previous =0, current = 1, next =0, n, i;

    printf("Enter a Number\n");
    scanf("%d",&n);

    for( i = 0; i<n-1; i++)
    {
        next = previous + current ;
        previous = current ;
        current = next;
    }

    printf("Print Last Fibonnaci series Nth terms = %d ",next);
}
//completed//
