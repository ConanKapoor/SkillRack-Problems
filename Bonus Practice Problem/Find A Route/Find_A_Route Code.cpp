void travel::get()
{
    cin>>num_Of_Cities;
    for(int i=0;i<num_Of_Cities;i++)
    {
        int Num_Of_Neighbours;
        string Name_Of_City;
        cin>>Name_Of_City>>Num_Of_Neighbours;
        for(int j=0;j<Num_Of_Neighbours;j++)
        {
            string Name;
            cin>>Name;
            city_Connection[Name_Of_City].push_back(Name);
        }
    }
    cin>>source>>destn;
}

bool find_value(string s,vector<string> ss)
{
    return find(ss.begin(),ss.end(),s)==ss.end();
}

void travel::find_Route()
{
    route.push_back(source);
    while(route.back()!=destn)
    {
        bool finish=true;
        vector<string> s=city_Connection[route.back()];
        sort(s.begin(),s.end());
        if(find(s.begin(),s.end(),destn)!=s.end())
        {
            route.push_back(destn);
            break;
        }
        for(int i=0;i<s.size();i++)
        {
            if(find_value(s[i],route))
            {
                route.push_back(s[i]);
                finish=false;
                break;
            }
        }
    }
}

void travel::print_Route()
{
    for(int i=0;i<route.size();i++)
    {
        cout<<route[i]<<endl;
    }
}
