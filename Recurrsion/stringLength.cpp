#include <iostream>
using namespace std;

int count(string st, int n=0);
int recLen(char* str);

int main()
{
    string st = "Nikhil Gusain";
    char str[] = "Nikki Gusain";
    cout<<"OTUPUT1:\n"<<count(st);
    cout<<"\nOUTPUT2:\n"<<recLen(str);
}

int count(string st, int n)
{
    if(st.size()==0)
        return n;
    return count(st.substr(1),n+1);
}


int recLen(char* str)    
{
    // if we reach at the end of the string
    if (*str == '\0') 
        return 0;
    else
        return 1 + recLen(str + 1); 
}