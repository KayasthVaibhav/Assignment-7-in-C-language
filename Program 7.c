//Write a program to print all Prime numbers between two given numbers..?//

#include <stdio.h>
#include <conio.h>


int main()
{

    int a,b,i,n,flag = 0;

     printf("Enter two Numbers\n");
     scanf("%d%d",&a,&b);

    for ( n=a; n<=b; n++)
    {
        flag=0;
    for ( i=2; i<=n/2; i++)
    {
        if(n%i == 0)
            flag =1;
    }
    if (flag == 0 )
    printf("%d ",n);
}
    return 0;
}

//Completed//

