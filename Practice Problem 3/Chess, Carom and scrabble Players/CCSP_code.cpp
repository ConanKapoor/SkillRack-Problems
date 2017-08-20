void set::get()
{
    cin>>num_Of_Ele;
    for(int i=0;i<num_Of_Ele;i++)
        cin>>names[i];
}
void set::print()const
{
    for(int i=0;i<num_Of_Ele;i++)
    {

            if(i==0)
            cout<<names[i];
            else
                cout<<","<<names[i];
    }
    cout<<"\n";
}
set set::intersection(set &set2)
{
    set set3;
    int k=0,m,j;
    for(m=0;m<num_Of_Ele;m++)
    {
        for(j=0;j<set2.num_Of_Ele;j++)
        {
            if(strcmp(names[m],set2.names[j])==0)
            {
                strcpy(set3.names[k],names[m]);
                k++;
            }
        }
    }
    set3.num_Of_Ele=k;
    return set3;
}
set set::difference(set & set2)
{
    set set3;
    int k=0,l,m,j;
    for(m=0;m<num_Of_Ele;m++)
    {
        l=0;
        for(j=0;j<set2.num_Of_Ele;j++)
        {
            if(strcmp(names[m],set2.names[j])==0)
            {
                l++;
            }
        }
        if(l==0)
        {
              strcpy(set3.names[k],names[m]);
              k++;
        }
    }
    set3.num_Of_Ele=k;
    return set3;
}
