void negException::error_Msg() const
{
    cout<<"\nNegative Marks Not Allowed";
}

void moreException::error_Msg() const
{
    cout<<"\nMarks Greater than 100 Not Allowed";
}

void student::get()
{
    int i;
    cin>>rollno;
    cin>>name;
    for(i=0;i<5;++i)
    {
        cin>>marks[i];
        if(marks[i]<0)
        {
            throw negException();
        }
        if(marks[i]>100)
        {
            throw moreException();
        }
    }
}

void student::print()
{
    cout<<rollno<<endl
    cout<<name<<endl;
    cout<<grade;
}

void student::calc_Avg()
{
    float Total=0;
    int i;
    for(i=0;i<5;++i)
    {
        Total=Total+marks[i];
    }
    avg=(Total)/(5.0);
}

void student::find_Grade()
{
    if(avg >=90 && avg<=100)
        grade='S';
    if(avg>=80 && avg<90)
        grade='A';
    if(avg>=70 && avg<80)
        grade='B';
    if(avg>=60 && avg<70)
        grade='C';
    if(avg>=50 && avg<60)
        grade='D';
    if(avg>=40 && avg<50)
        grade='E';
    if(avg<40)
        grade='F';
}

main()
{
    try
    {
        student stud;
        stud.get();
        stud.calc_Avg();
        stud.find_Grade();
        stud.print();
    }
    catch(negException n)
    {
        n.error_Msg();
    }
    catch(moreException m)
    {
        m.error_Msg();
    }
}
