#include <iostream>
using namespace std;

void solve(string st, string ans, string arr[]);


int main()
{
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string st="";
    int index = 0;
    cout<<"enter digit :";
    cin>>st;
    solve(st,"",arr);

}

void solve(string st, string ans, string arr[])
{
    if(st.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = st[0];
    string code = arr[ch-'0'];
    string ros = st.substr(1);

    for(int i=0; i<code.length(); i++)
    {
        solve(ros ,ans+code[i], arr);
    }
}