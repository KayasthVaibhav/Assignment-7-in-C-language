//Write a Program to find Next Prime number of a given number ..?//

#include <stdio.h>
#include <conio.h>

int main()
{

    int a,i,n,flag = 0;

    printf("Enter a Number\n");
    scanf("%d",&a);
    for ( n=a; 1; n++)
    {
        flag=0;
    for ( i=2; i<=n/2; i++)
    {
        if(n%i == 0)
            flag =1;
    }
    if (flag == 0 )
    {
    printf("%d Given prime number is next prime number is = %d ",a,n);
        break;
    }
}
    return 0;
}

//Completed//

