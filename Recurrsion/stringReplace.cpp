#include <iostream>
using namespace std;


void rep(string st)
{
    if(st.size()==1)
    {
        cout<<st[0];
        return;
    }
    if(st.size()==0)
        return;
    if(st[0]=='p' && st[1]=='i')
    {
        cout<<"3.14";
        rep(st.substr(2));
    }
    else
    {
        cout<<st[0];
        rep(st.substr(1));
    }
}
int main()
{
    string st="pippppiipippppipixkpi";
    rep(st);
}