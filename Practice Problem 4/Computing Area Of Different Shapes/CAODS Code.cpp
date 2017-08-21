#include<iostream>
#include<iomanip>
using namespace std;

float area(float length,float breadth)
{
    return length*breadth;
}
float area(float top,float bottom,float height)
{
    return(height*(top+bottom)/2);
}
float area(float radius)
{
    return 3.14*radius*radius;
}
