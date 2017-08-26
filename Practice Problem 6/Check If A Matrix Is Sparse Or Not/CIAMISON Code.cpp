void mismatchDimension::error_Msg() const
{
    cout<<"\nDimension of matrices do not match\n";
}
template<class T>
void matrix<T>::get()
{
    int i,j;
	cin>>row;
	cin>>col;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			cin>>ele[i][j];
		}
	}
}

template<class T>
bool matrix<T>::check_Sparse()
{
	int count=0,flag=0,i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			if(ele[i][j]==0)
				count=count+1;
			else
				flag=flag+1;
		}
	}
	if(count>flag)
		return 1;
	else
		return 0;
}

template<class T>
matrix<T> matrix<T>::add(matrix &m)
{
	int i,j;
	matrix m3;
	if(row!=m.row && col!=m.col)
		throw mismatchDimension();
	else
	{
		for(i=0;i<row;++i)
		{
			for(j=0;j<col;++j)
			{
				m3.ele[i][j]=m.ele[i][j]+ele[i][j];
				m3.row=row;
				m3.col=col;
			}
		}
		return m3;
	}
}

template<class T>
void matrix<T>::print()
{
	int i,j;
	for(i=0;i<row;++i)
	{
		for(j=0;j<col;++j)
		{
			cout<<ele[i][j]<<"\t";
		}
		cout<<"\n";
	}
}
