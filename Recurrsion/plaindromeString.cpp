#include <iostream>
using namespace std;

bool pelin(string st, int n,int l=0);

bool palin2(string st, int start, int end);

bool palin3(string st); // least efficient becuase creates extra strings and time coomp. O(n^2)
// matches c++ best practices

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

bool palin2(string st, int start, int end)
{
    if(start>=end)
    {
        return true;
    }
    if(st[start]!=st[end])
    {
        return false;
    }
    return palin2(st,start+1,end-1);
}


bool palin3(string st)
{
    if(st.size()==0 || st.size()== 1)
    {
        return true;
    }
    if(st[0]!=st[st.size()-1])
    {
        return false;
    }
    return palin3(st.substr(1, st.size()-2));
}