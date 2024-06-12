#include <iostream>
using namespace std;

void permu(string st, string ans);
int main()
{
    string st = "abc";
    permu("abc","");
}

void permu(string st, string ans)
{
    if(st.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for(int  i=0; i<st.length(); i++)
    {
            
        char ch = st[i];
        string rest = st.substr(0,i) + st.substr(i+1);
        // permu(rest, ans );
        permu(rest, ans+ch );

    }
    // char ch = st[0];
    // string res = st.substr(1);
    // permu(st.substr(1), ans+ch );
    
    
}