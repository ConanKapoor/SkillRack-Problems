void book::get()
{
	cin>>id>>name>>a_Name>>price;
}

template<class T,class S>
int count(T *data,int size,S search)
{
		int c=0,count=0;
		while(c < size)
		{
			if(*data==search)
			{
				count=count+1;
            }
		    data++;
            c=c+1;
        }
		cout<<count;
}

bool book::operator==(string s)
{
    if(name==s)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int num,choice,number,i;
	cin>>choice;
	if(choice==1)
	{
		cin>>num;
		int detail[num];
		for(i=0;i<num;++i)
		{
			cin>>detail[i];
		}
		cin>>number;
		count(detail,num,number);
	}
	if(choice==2)
	{
		cin>>num;
		char detail[num],c,character;
		for(i=0;i<num;++i)
		{
			cin>>c;
			detail[i]=c;
		}
		cin>>character;
		count(detail,num,character);
	}
	if(choice==3)
	{
		cin>>num;.
		book bb[num];
		char stringg[50];
		int i,c=0;
		for(i=0;i<num;++i)
		{
            bb[i].get();
        }
		cin>>stringg;
		for(i=0;i<num;++i)
		{
            if(bb[i].operator==(stringg))
            {
                c=c+1;
            }
		}
		cout<<c;
	}
}
