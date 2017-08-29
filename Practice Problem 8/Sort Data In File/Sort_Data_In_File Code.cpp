#include<iostream>
#include<vector>
#include<fstream>                   //Include Header Files.
#include<algorithm>
using namespace std;
main()
{
    char file_name[100];            //Initialize array.
    cin>>file_name;                 //Input name.
    fstream File;
    File.open(file_name,ios::in);      //Open file.
    vector<int> V;                  //Initialize vector.
    while(!File.eof())
    {
        int data;
        File>>data;
        V.push_back(data);             //Put data in vector.
    }
    sort(V.begin(),V.end());        //Call sort function.
    for(int i=0;i<V.size();i++)
        cout<<V[i]<<endl;           //Print the sorted data.
}
