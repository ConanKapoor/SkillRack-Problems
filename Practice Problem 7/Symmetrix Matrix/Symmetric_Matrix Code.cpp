#include<iostream>
#include<vector>                      //Including vector header file.
using namespace std;
int main()
{
	int n,i,j,count=0;            //Initialize variables.
	cin>>n;                          //Read dimensions.
	vector<vector<int> >Matrix(n,vector<int>(n));
	vector<vector<int> >Matrix2(n,vector<int>(n));   //Initialize 2D arrays.
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			cin>>Matrix[i][j];
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			Matrix2[i][j]=Matrix[j][i];
		}
	}
	for(i=0;i<n;++i)
	{
		for(j=0;j<n;++j)
		{
			if(Matrix[i][j]==Matrix2[i][j])
				count=count+1;
		}
	}
	if(count==(n*n))
		cout<<"\nSymmetric:";
	else
		cout<<"\nNot symmetric:";
}
