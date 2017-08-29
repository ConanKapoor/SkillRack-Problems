#include<iostream>
#include<fstream>                       //Include header files.
#include<string>
using namespace std;
main()
{
    string Word;                       //Read word.
    cin>>Word;
    string Tweets;
    ifstream File;                     //Input file.
    File.open("tweets.txt");           //Open file.
    int count=0;
    while(!File.eof())
    {
        File>>Tweets;
        count+=int(Word==Tweets);     //If word found, increase count.
    }
    cout<<count;                      //Print the count.
}
