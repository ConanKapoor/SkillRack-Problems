#include<stdio.h>
main()
{
    char BT,Size,ToB;
    int i=0,j,Total=0;
    int X[2][8]={{900,3600,1080,1200,2,4500,2700,1800},{1200,3600,1980,1800,2,4500,2100,1800}};
    scanf("%c %c %c",&BT,&Size,&ToB);
    if(BT=='s')
        i=1;
    for(j=0;j<8;j++)
        {
        Total+=X[i][j];
        if(j==4 && ToB=='m')
            break;
        }
    if(Size=='d')
        Total*=1.5;
    printf("%d",Total);
}
