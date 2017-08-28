void bag::get()
{
    int i;
    cin>>name;
    cin>>num_Of_Items;
    for(i=0;i<num_Of_Items;++i)
    {
        cin>>item_Wt[i];
        cin>>item_Count[i];
    }
}

void bag::print()
{
    cout<<name<<endl;
}

float bag::compute()
{
    int i;
    float Sum=0.0;
    for(i=0;i<num_Of_Items;++i)
    {
        Sum=Sum+item_Wt[i]*item_Count[i];
    }
    return Sum;
}

void solar::get()
{
    int i;
    float weight;
    cin>>num_Bags;
    bag b[num_Bags];
    for(i=0;i<num_Bags;++i)
    {
        b[i].get();
        weight=b[i].compute();
        m1[weight]=b[i];
        v.push_back(weight);
    }
}

void solar::sort_Vec()
{
    sort(v.begin(),v.begin()+num_Bags);
    reverse(v.begin(),v.end());

}

void solar::print_In_Order()
{
    int i;
    for(i=0;i<num_Bags;++i)
    {
        m1[v[i]].print();
    }
}
