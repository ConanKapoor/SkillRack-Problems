#include<iostream>
using namespace std;

class Boarding_Pass
{
    char Name[30];
    int x;
    int age;
    char address[40];
    char date[40];
    long mobile;
    float fare;
    public:
        friend void Discount(Boarding_Pass &pass);
        void get()
        {
            cin>>Name;
            cin>>x;
            cin>>age;
            cin>>address;
            cin>>date;
            cin>>mobile;
            cin>>fare;
        }
        void Display()
        {
            cout<<Name<<endl;
            cout<<"CA"<<x<<endl;
            cout<<age<<endl;
            cout<<date<<endl;
            cout<<mobile<<endl;
            cout<<fare<<endl;
        }
};
void Discount(Boarding_Pass &pass)
{
    if(pass.age<12)
        pass.fare=pass.fare-(pass.fare*0.5);
    if(pass.age>=12 && pass.age<58)
        pass.fare=pass.fare-(pass.fare*0.2);
    if(pass.age>=58)
        pass.fare=pass.fare-(pass.fare*0.4);
}
int main()
{
    Boarding_Pass pass;
    pass.get();
    Discount(pass);
    pass.Display();
}
