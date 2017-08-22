void item::get()
{
    cin>>prod_name;
    cin>>prod_code;
    cin>>prod_price;
    cin>>stock_In_Hand;
}

void item::print() const
{
    cout<<prod_name<<endl;
    cout<<prod_code<<endl;
    cout<<prod_price<<endl;
    cout<<stock_In_Hand<<endl;
}

void store::get_details()
{
    int i;
    cin>>num_Of_Items;
    for(i=0;i<num_Of_Items;i++)
    {
        items[i].get();
    }
}

void store_keeper::stock_mgmt(store &s)
{
    int i;
    for(int i=0;i<s.num_Of_Items;i++)
    {
        if(s.items[i].stock_In_Hand<10)
        {
            s.items[i].print();
        }
    }
}
