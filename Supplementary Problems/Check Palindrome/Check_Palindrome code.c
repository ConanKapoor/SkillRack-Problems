#include<stdio.h>
#include<string.h>
int main()
{
    char string[30];                   //Initiate string with length of 30 as char.
    scanf("%s",string);                //Read string.
    int counter=0,i=0;                 //Initiate counter=0,i=0 as int.
				int n=strlen(string);              //Calculate length of string.
    while(string[i]!='\0')
    {
        if(string[i]!=string[n-i-1])   //Checking if the string is same from both ends.
        {
            counter+=1;
            break;
        }
        i++;
    }
    if(counter==0)
        printf("Palindrome");          //Print commands.
    else
        printf("Not Plaindrome");
}
