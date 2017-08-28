void charVector::initializeVector(string s)
{
    for(int i=0;i<s.size();i++)
        cv.push_back(s[i]);  //Function to input the strings in vector.
}

void charVector::dupVector()   //Function to double the string add in single vector.
{
    int s=cv.size();
    for(int i=0;i<s;i++)
         cv.push_back(cv[i]);    //push back in vector.
}
void charVector::dupRevVector()
{
    int s=cv.size();//Function to double and reverse the string and add in single vector.
    for(int i=0;i<s;i++)
         cv.push_back(cv[s-i-1]);    //push back in vector.
}

void charVector::print()     //Function to print the final vector.
{
    for(int i=0;i<cv.size();i++)
         cout<<cv[i];
}
