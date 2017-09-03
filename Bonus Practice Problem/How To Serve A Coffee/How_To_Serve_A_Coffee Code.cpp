void guest::get()
{
    cin>>room_No>>name>>friend_Room_No;     //Get function of class guest to input data.
}

void hotel::get()      //Get function of hotel class to input data.
{
    cin>>num_Of_Guest;         //Input Number_Of_Guest.
    guest Guest;                       //Make object of guest class.
    for (int i=0;i<num_Of_Guest;i++)
    {
        Guest.get();                       //Read data of guest.
        stay_Det[Guest.room_No]=Guest;       //Input the data in maps.
    }
    cin>>first_Room_No;        //Input first_Room_No
}

void hotel::serve_Coffee()              //Serve_Coffee function of hotel class.
{
    int current=first_Room_No;     //Making temporary variable current.
    while (current!=-1)
    {
        cout<<stay_Det[current].name<<" "<<current<<endl;  //Printing data.
        current=stay_Det[current].friend_Room_No;
    }
}
