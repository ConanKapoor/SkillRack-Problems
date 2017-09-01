#include<stdio.h>
int main()
{
    int n,i,j,max;                       //Initializing variables.
    scanf("%d",&n);																						//Read n.
    int array[n][n];																					//Initiate a 2D array of dimension nxn.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&array[i][j]);        //Read value of matrix.
        }
    }
    for(i=0;i<n;i++)
    {
        max=array[i][0];
        for(j=1;j<n;j++)
        {
            if(max<array[i][j])
            {
                max=array[i][j];        //Find maximum of each row.
            }
        }
        printf("%d\n",max);               //Print the maximum of each row.
    }
}
