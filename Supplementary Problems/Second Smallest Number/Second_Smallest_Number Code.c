#include<stdio.h>
int main()
{
    int n,i,min,max,answer,mina,maxa;
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    min=max=array[0];
    mina=maxa=0;
    for(i=1;i<n;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
            mina=i;
        }
        else if(array[i]>max)
        {
            max=array[i];
            maxa=i;
        }
    }
    array[mina]=array[maxa];
    answer=array[0];
    for(i=1;i<n;i++)
    {
        if(array[i]<answer)
            answer=array[i];
    }
    printf("%d",answer);
}
