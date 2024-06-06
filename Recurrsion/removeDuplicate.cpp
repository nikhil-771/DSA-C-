#include <iostream>
using namespace std;


void solve(string st, string &result);
int main()
{
    string st="aabbbbcccccsssss";
    string result="";
    solve(st, result);
    cout<<result;
}

void solve(string st, string &result)
{
    if(st.length()==0)
    {
        return;
    }
    if(result.size()==0 || result[result.size()-1]!=st[0])
    {
        result = result + st[0];
    }
    solve(st.substr(1),result);

}