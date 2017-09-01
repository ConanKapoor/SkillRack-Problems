#include<stdio.h>
main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int array[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum + array[i][j];
            }
        }
    }
    printf("%d",sum);
}
