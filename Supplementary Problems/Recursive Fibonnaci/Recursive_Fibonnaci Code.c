#include<stdio.h>
int main()
{
    int n,i,j=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\n", Fibonacci(j));
        j++;
    }
}
int Fibonacci(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return(Fibonacci(n-1)+Fibonacci(n-2));
}

