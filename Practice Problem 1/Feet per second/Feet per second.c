#include<stdio.h>
#include<math.h>
main()
{
    float mins,secs,Time,fps,mps;
    scanf("%f",&mins);
    scanf("%f",&secs);
    Time=(mins*60)+(round(secs));
    fps=5280/Time;
    mps=1609.34/Time;
    fps=round(fps*100)/100;
    mps=round(mps*100)/100;
    printf("%0.2f fps \n",fps);
    printf("%0.2f mps",mps);
}
