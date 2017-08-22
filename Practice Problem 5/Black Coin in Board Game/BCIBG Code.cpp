void coin::get()
{
    cin>>weight>>curr_X>>curr_Y;
}
void coin::print()
{
    cout<<weight<<endl;
}
int coin::get_Curr_X()
{
    return curr_X;
}
int coin::get_Curr_Y()
{
    return curr_Y;
}
int coin::get_Weight()
{
    return weight;
}

class black_Coin:public coin
{
    int no_Of_Moves;
    public:
        void get()
        {
            coin::get();
            cin>>no_Of_Moves;
        }
        void print()
        {
            coin::print();
        }
        bool gained_Power()
        {
            if(no_Of_Moves>=5)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        void move()
        {
            cout<<coin::curr_X<<","<<coin::curr_Y+1<<endl;
            //cout<<coin::curr_X<<","<<coin::curr_Y-1<<endl;
        }
};
class red_Coin:public coin
{
    int curr_X;
    int curr_Y;
    public:
        void print()
        {
            coin::print();
        }
        void set_Curr_Pos_Wt(black_Coin b)
        {
            weight = b.get_Weight();
            curr_X = b.get_Curr_X();
            curr_Y = b.get_Curr_Y();
        }
        void move()
        {
            cout<<curr_X-1<<","<<curr_Y<<endl;
            cout<<curr_X+1<<","<<curr_Y<<endl;
            cout<<curr_X<<","<<curr_Y-1<<endl;
            cout<<curr_X<<","<<curr_Y+1<<endl;
            cout<<curr_X-1<<","<<curr_Y-1<<endl;
            cout<<curr_X+1<<","<<curr_Y-1<<endl;
            cout<<curr_X-1<<","<<curr_Y+1<<endl;
            cout<<curr_X+1<<","<<curr_Y+1<<endl;
        }
};
