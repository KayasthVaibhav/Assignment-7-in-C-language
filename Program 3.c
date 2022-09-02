//Write a program to check whether a given Number is There in the Fibbonacci Series Or Not ...?//

#include <stdio.h>
#include <conio.h>

int main()
{
    int previous =0, current =1, next =0, n, i;

    printf("Enter a number :\n");
    scanf("%d",&n);

    for(i = 0; 1; i++)
    {
        next = previous + current;
        previous = current;
        current = next;

        if (next == n)
        {
            printf("Given number is include in this fibbonacci Series ");
            break ;
        }

        if (next > n)
        {
            printf("Given number is  not include in this fibbonacci Series ");
            break ;

        }
    }


}
