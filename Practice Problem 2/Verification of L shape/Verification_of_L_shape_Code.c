#include <stdio.h>
#include <string.h>
int main()
{
    int rows,cols,i,j,count=0;
    scanf("%d\n%d",&rows,&cols);
    char board[rows][cols];
    for(i=0;i<rows;i++)
        for(j=0;j<cols;j++)
            scanf(" %c",&board[i][j]);
    for(i=(rows-1);i>=0;i--)
        for(j=(cols-2);j>=0;j--)
            if(board[i][j]==board[i][j+1] && board[i][j]==board[i-1][j])
                count++;
    if(count>0)
        printf("Yes");
    else
        printf("No");
}

