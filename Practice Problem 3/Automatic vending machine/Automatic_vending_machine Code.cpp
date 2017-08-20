#include<iostream>
#include<string>
using namespace std;
typedef struct
{
    int price;
    int id;
    int quantity;
}shop;
int main()
{
    int n,i,counter=0;
    cin>>n;
    if(n>0)
    {
        shop details[n],choice;
        for(i=0;i<n;i++)
        {
            cin>>details[i].id;
            cin>>details[i].price;
            cin>>details[i].quantity;
        }
    cin>>choice.id;
    cin>>choice.price;
    try
    {
        for(i=0;i<n;i++)
        {
            if (choice.id!=details[i].id)
            {
                counter++;
                if(counter==n)
                {
                    throw(1);
                }
            }
            else
            {
                if(choice.price<details[i].price)
                {
                    throw(1.2);
                    break;
                }
                if(details[i].quantity==0)
                {
                    throw("hola");
                    break;
                }
                cout<<choice.id<<endl;
            }

        }
    }
    catch(int a)
    {
        cout<<"Wrong item code"<<endl;
    }
    catch(double a)
    {
        cout<<"Insufficient amount"<<endl;
    }
    catch(string a)
    {
        cout<<"Less stock"<<endl;
    }
}
    else
        cout<<"Invalid input"<<endl;
}
