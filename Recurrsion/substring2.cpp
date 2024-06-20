#include <iostream>
using namespace std;


void subSequence(string st, string ans);
int main()
{
    string st = "abc";
    subSequence(st,"");
}


void subSequence(string st, string ans)
{
    if(st.length() == 0)
    {
            cout<<ans<<endl;
            return;
    }
    char ch = st[0];
    string rest = st.substr(1);

    subSequence(rest, ans);
    subSequence(rest, ans+ch);
    
}