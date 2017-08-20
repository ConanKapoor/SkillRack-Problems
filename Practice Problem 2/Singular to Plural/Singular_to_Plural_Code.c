#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
main()
{
    char noun[20],noun2[20]="es",noun3[20];
    int i,j,length,length1,length2;
    scanf("%s",noun);
    strcpy(noun3,noun);
    length=strlen(noun);
    length1=strlen(noun);
    length2=strlen(noun3);
    for(i=0;i<length2;i++)
        {
        noun3[i]=tolower(noun3[i]);
        }
    for(i=0;i<length;++i)
    {
        noun[i]=tolower(noun[i]);
        if(i==length-1)
        {

            if(noun[i]=='y')
                {
                    noun[i]='i';
                    for(j=0;noun2[j]!='\0';++j,++length1)
                    {
                        noun[length1]=noun2[j];
                    }
                    noun[length1]='\0';
                }
            else if(noun[i]=='s' || (noun[i]=='h' && noun[i-1]=='c') || (noun[i]=='h' && noun[i-1]=='s'))
                {
                      for(j=0;noun2[j]!='\0';++j,++length1)
                    {
                        noun[length1]=noun2[j];
                    }
                    noun[length1]='\0';
                }
            else
            {
                noun[length1]='s';
                length1++;
                noun[length1]='\0';
            }

        }
    }
    printf("%s %s",noun3,noun);
}
