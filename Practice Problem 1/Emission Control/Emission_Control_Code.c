#include<stdio.h>
main()
{
    int Pollutant_Number;
    float Grams_Per_Mile,Odometer, Emission;
    scanf("%d",&Pollutant_Number);
    scanf("%f",&Grams_Per_Mile);
    scanf("%f",&Odometer);

    switch(Pollutant_Number)
        {
        case 1: if (Odometer<=50000)
                    Emission=3.4;
                else
                    Emission=1.0;
                break;
        case 2: if (Odometer<=50000)
                    Emission=0.31;
                else
                    Emission=0.39;
                break;
        case 3: if (Odometer<=50000)
                    Emission=0.4;
                else
                    Emission=1.0;
                break;
        case 4: if (Odometer<=50000)
                    Emission=0.25;
                else
                    Emission=0.31;
                break;
        }

    if(Emission==1.0)
        {
        if (Grams_Per_Mile>Emission)
            printf("Emission exceed permitted level of %.1f g/mile",Emission);
        else
            printf("Emission do not exceed permitted level of %.1f g/mile",Emission);
        }
    else
        {
        if (Grams_Per_Mile>Emission)
            printf("Emission exceed permitted level of %.2f g/mile",Emission);
        else
            printf("Emission do not exceed permitted level of %.2f g/mile",Emission);
        }
}
