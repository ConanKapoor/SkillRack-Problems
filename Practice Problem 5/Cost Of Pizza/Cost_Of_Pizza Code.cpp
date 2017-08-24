class pizza: public circle,public cookeditem
{
    public:
        void get_P();
};

class veg_Pizza:public pizza
{
    float Total;
    public:
        void compute_Cost(kitchen k);
        void print_P();
};

class chik_Pizza:public pizza
{
    float Total;
    public:
        void compute_Cost(kitchen k);
        void print_P();
};

void circle:: get_C()
{
    cin>>radius;
}

void circle::print_C()
{
    cout<<radius;
}

float circle::area()
{
    return (radius*radius*3.14);
}

void kitchen::get_K()
{
    cin>>num1;
    for(int i=0;i<num1;i++)
    {
        cin>>ing_Cost[i].name>>ing_Cost[i].price;
    }
}

float kitchen::get_Cost(char *g_Cost)
{
    for(int i=0;i<num1;i++)
    {
        if (strcmp(ing_Cost[i].name,g_Cost)==0)
        {
            return ing_Cost[i].price;
        }
    }
}

void cookeditem::get_CI()
{
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>ing_Qty[i].name>>ing_Qty[i].qty;
    }
}
void kitchen::print_K()
{
    for(int i=0;i<num1;i++)
    {
        cout<<ing_Cost[i].name<<ing_Cost[i].price;
    }
}
void cookeditem::print_CI()
{
    for(int i=0;i<num;i++)
    {
        cout<<ing_Qty[i].name<<ing_Qty[i].qty;
    }
}
void pizza::get_P()
{
    get_C();
    get_CI();
}

void veg_Pizza::compute_Cost(kitchen k)
{
    Total=0;
    for(int i=0;i<num;i++)
    {
        Total=Total+area()*ing_Qty[i].qty*k.get_Cost(ing_Qty[i].name)/100;
    }
    Total+=50;
}

void chik_Pizza::compute_Cost(kitchen k)
{
    Total=0;
    for(int i=0;i<num;i++)
    {
        Total=Total+area()*ing_Qty[i].qty*k.get_Cost(ing_Qty[i].name)/100;
    }
    Total+=100;
}

void veg_Pizza::print_P()
{
    cout<<fixed<<setprecision(2)<<Total;
}

void chik_Pizza::print_P()
{
    cout<<fixed<<setprecision(2)<<Total;
}
