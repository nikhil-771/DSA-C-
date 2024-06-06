#include <iostream>
using namespace std;

string reverse1(string st, int n);
string reverse2(string st, int n);
void reverse3(string st);
int main()
{
    string st="niasuG lihkiN";
    cout<<"output1"<<endl;
    cout<<reverse1(st,st.size()-1);
    cout<<"\noutput2"<<endl;
    cout<<reverse2(st,st.size()-1);
    cout<<"\nOUTPUT3\n";
    reverse3(st);
}

string reverse1(string st, int n)
{
    if(n<0)
        return "";
    cout<<st[n];
    return reverse1(st,--n);
    // Do not return reversed string to main
}

string reverse2(string st, int n)
{
    if(n<0)
        return "";
    return st[n]+reverse2(st,n-1);
    // returns reversed string to main
}

void reverse3(string st)
{
    if(st.size()==0)
        return ;
    reverse3(st.substr(1));
    
    cout<<st[0];

} 