#include <iostream>
using namespace std;

bool pelin(string st, int n,int l=0);
int main()
{
    string st = "yess no on ssey";
    string str="yessnikhilssey";
    cout<<pelin(st,st.size()-1);
    if(pelin(str,str.size()-1))
        cout<<"YES";
    else
        cout<<"NO";
}
bool pelin(string st, int n, int l)
{
    if(n>=l)
    {
        if(st[l]!=st[n])  
            return false;
        return pelin(st,n-1,l+1);
    }
    return true;

}