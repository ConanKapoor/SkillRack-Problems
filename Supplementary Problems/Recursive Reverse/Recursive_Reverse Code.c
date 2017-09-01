#include <stdio.h>
#include <string.h>
void reverse(char [], int, int);
int main()
{
    char string[20];
    int size;
    scanf("%s", string);
    size = strlen(string);
    reverse(string,0,size-1);
    printf("%s",string);
}

void reverse(char string[],int index,int size)
{
    char temporary;
    temporary=string[index];
    string[index]=string[size-index];
    string[size-index]=temporary;
    if(index==size/2)
    {
        return;
    }
    reverse(string,index+1,size);
}
