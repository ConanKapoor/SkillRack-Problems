void learning_Material::get()
{
    cin>>isbn>>title>>author>>year>>price;
}
void learning_Material::print()
{
    cout<<isbn<<"\n"<<title<<endl;
}

class book:public learning_Material
{
    int No_of_Pages;
    public:
        int price;
        void get()
        {
            learning_Material::get();
            cin>>No_of_Pages;
        }
        void calc_Price()
        {
            price=No_of_Pages*1;
        }
        void print()
        {
            learning_Material::print();
            cout<<price;
        }
};

class CD:public learning_Material
{
    int Duration;
    public:
        int price;
        void get()
        {
            learning_Material::get();
            cin>>Duration;
        }
        void calc_Price()
        {
            price=Duration*2;
        }
        void print()
        {
            learning_Material::print();
            cout<<price;
        }
};
