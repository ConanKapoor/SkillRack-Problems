int vector::operator[](int x)
{
    return ele[x-1];
}
vector vector::operator+(vector&v2)
{
    vector v3;
    if (v2.num!=num)
    {
        cerr<<"Vectors of different dimension cannot be added"<<endl;
        v3.num=0;
    }
    else
    {
        v3.num=num;
        for(int i=0;i<num;i++)
        {
            v3.ele[i]=ele[i]+v2.ele[i];

        }
    }
    return v3;
}
vector vector::operator-(vector&v2)
{
    vector v3;
    v3.num=num;
    for(int i=0;i<num;i++)
        {
            v3.ele[i]=ele[i]-v2.ele[i];

        }
        return v3;
}
istream& operator>>(istream& input,vector& v)
{
    input>>v.num;
    for(int i=0;i<v.num;i++)
     {
        input>>v.ele[i];
     }
     return input;
}
ostream& operator<<(ostream& out,vector& v)
{
    for(int i=0;i<v.num;i++)
    {
        out<<v.ele[i]<<"\n";
    }
    return out;
}
