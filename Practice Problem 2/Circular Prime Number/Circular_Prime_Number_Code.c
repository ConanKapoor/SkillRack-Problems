#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char num[20],temp;
    int i,j,k,length,a,b,count=0;
    scanf("%s",num);
    length=strlen(num);
    for(i=0;i<length;++i)
        {
        for(j=0;j<length;++j)
            {
            if(j==0)
                temp=num[j];
            if(j==length-1)
                num[j]=temp;
            else
                num[j]=num[j+1];
            }
        a=atoi(num);
        b=a/2;
        for(k=2;k<b;++k)
            {
            if(a%k==0)
                count=count+1;
            }

        }
    if(count==0)
        printf("Circular prime");
    else
        printf("Not circular prime");
return 0;
}
