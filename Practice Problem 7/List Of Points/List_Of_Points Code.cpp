point mob;
void point::get()
{
    cin>>name>>x>>y;
}

void point::print()
{
    cout<<name;
}

float point::dist(point p)
{
    return sqrt((this->x-p.x)*(this->x-p.x)+(this->y-p.y)*(this->y-p.y));
}

void mobile::get()
{
    cin>>num_Tower_Pts;
    point temp;
    for(int i=0;i<num_Tower_Pts;i++)
    {
        temp.get();
        tower_Pts.push_back(temp);
    }
    mobile_Pt.get();
    mob=mobile_Pt;
}

bool compare(point p1,point p2)
{
    return p1.dist(mob)<p2.dist(mob);
}

point mobile::find_Min()
{
    tower_Pts.sort(compare);
    return tower_Pts.front();
}
