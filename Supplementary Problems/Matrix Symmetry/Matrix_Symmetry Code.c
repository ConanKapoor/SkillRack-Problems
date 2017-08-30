#include<stdio.h>
main()
{
	int n,i,j,c=0;
	scanf("%d",&n);
	int array[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&array[i][j]);
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			if(i!=j)
			{
				if(array[i][j]==array[j][i])
				{
                    c=c+1;
                }
			}
		}
	}
	if(c==((n*n)-n))
		printf("Symmetric");
	else
		printf("Not symmetric");
}
