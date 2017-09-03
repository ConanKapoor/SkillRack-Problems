istream& operator>>(istream& Input,point &p)
{
    Input>>p.x>>p.y;                    //Overloading >> Operator.
}

ostream& operator<<(ostream& Output,point& p)
{
    Output<<p.x<<endl<<p.y<<endl;      //Overloading << Operator.
}

bool point::operator==(point& p)
{
    return p.x==x&&p.y==y;             //Overloading == Operator.
}

bool point::operator>(point& p)
{
    if(p.x==x)
    {
        return y>p.y;                 //Overloading > Operator.
    }
    return x>p.x;
}

void sort_Points(point *p,int n)     //Sort_Points function to sort given points.
{
    point swap;                      //Initialize object of point class.
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(p+j)>*(p+i))
            {
                swap=*(p+i);        //Doing bubble Sort.
                *(p+i)=*(p+j);
                *(p+j)=swap;
            }
        }
    }
}
