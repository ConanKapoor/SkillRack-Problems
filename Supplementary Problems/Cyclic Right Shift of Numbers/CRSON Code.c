#include<stdio.h>
int main()
{
    int n,i,m;
    scanf("%d",&n);
    int array1[n],array2[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        array2[i]=array1[(n-m+i)%n];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",array2[i]);
    }
}
