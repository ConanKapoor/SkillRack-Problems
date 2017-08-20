void read_Values(board &b,snakes &snake_Det,ladders &ladder_Det,position &cur_Pos,rolls &r)
{
    cin>>b.row;
    cin>>b.col;
    cin>>snake_Det.num;
    for(int i=0;i<snake_Det.num;i++)
    {
        cin>>snake_Det.st_Grid[i];
        cin>>snake_Det.end_Grid[i];
    }
    cin>>ladder_Det.num;
    for(int i=0;i<snake_Det.num;i++)
    {
        cin>>ladder_Det.st_Grid[i];
        cin>>ladder_Det.end_Grid[i];
    }
    cin>>cur_Pos.row;
    cin>>cur_Pos.col;
    cin>>r.num;
    for(int i=0;i<r.num;i++)
    {
        cin>>r.roll[i];
    }
}

int find_New_Pos(board &b,snakes &snake_Det,ladders &ladder_Det,position &cur_Pos, rolls &r)
{
    for(int i=0;i<r.num;i++)
    {
        int g=(cur_Pos.row-1)*b.col+cur_Pos.col;
        g+=r.roll[i];
        cur_Pos.row=(g/b.col)+1;
        cur_Pos.col=g%b.col;
        g=(cur_Pos.row-1)*b.col+cur_Pos.col;
        for(int i=0;i<snake_Det.num;i++)
        {
            if(snake_Det.st_Grid[i]==g)
            g=snake_Det.end_Grid[i];
            //break;
        }
        for(int i=0;i<ladder_Det.num;i++)
        {
            if(ladder_Det.st_Grid[i]==g)
            g=ladder_Det.end_Grid[i];
        }
        //cout<<cur_Pos.row<<",";
        //cout<<cur_Pos.col<<endl;
        cur_Pos.row=(g/b.col)+1;
        cur_Pos.col=g%b.col;
    }
    return (cur_Pos.row-1)*b.col+cur_Pos.col;
}
