#include <stdio.h>
struct computer
{
    int xx;
    int yy;
    int zz;
    int mm;
    char names[100];
};
int main()
{
    int n,i,k;
    scanf("%d",&n);
    struct computer details[n];
    for(i=0;i!=n;i++){
        char nickname;
        scanf("%d.%d.%d.%d",&details[i].xx,&details[i].yy,&details[i].zz,&details[i].mm);
        scanf("%s",&details[i].names);
    }
    for(i=0;i!=n;i++)
        for(k=i+1;k!=n;k++){
            if((details[i].xx==details[k].xx) && (details[i].yy==details[k].yy))
                printf("\'Machines %s and %s are on same local network\'\n",details[i].names,details[k].names);
    }
}
