point::point()
{
    x=y=0;
}

void point::get()
{
    cin>>x>>y;
}

ostream& operator<<(ostream& Output,point p)
{
    Output<<p.x<<" "<<p.y<<endl;
    return Output;
}

void outofrange::what()
{
    cout<<"Out of range";
}

polygon::polygon(int n)
{
    num_Of_Ver=n;
    point* vertices=new point[n];
}

polygon::~polygon()
{
    delete(vertices);
}

void polygon::get()
{
    vertices=new point[num_Of_Ver];
    for(int i=0;i<num_Of_Ver;i++)
        cin>>(vertices+i)->x>>(vertices+i)->y;
}

point& polygon::operator[](int idx)
{
    if(idx>num_Of_Ver)
        throw outofrange();
    return *(vertices+idx);
}

double polygon::area()
{
    double Area;
    for(int i=0;i<num_Of_Ver;i++)
    {
        Area+=(vertices+i)->x*((vertices+(i+1)%num_Of_Ver)->y);
        Area-=(vertices+i)->y*((vertices+(i+1)%num_Of_Ver)->x);
    }
    return (-1*int(Area<0)+int(Area>0))*Area/2;
}
