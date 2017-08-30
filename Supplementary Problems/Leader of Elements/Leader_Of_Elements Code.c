#include<stdio.h>
main()
{
	int n,i,j,a=0,b=0;
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	for(i=0;i<(n-1);i++)
    {
        a=0;
        for(j=i+1;j<n;j++)
        {
            if(array[i]>array[j])
			{
                a=a+1;
            }
        }
        if(a==(n-(i+1)))
        {
            printf("%d\n",array[i]);
            b=1;
        }
    }
    if(b==0)
    {
        printf("\n No leader");
    }
}
