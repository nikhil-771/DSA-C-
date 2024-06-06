#include <iostream>
using namespace std;


void solve(string &st, string &result,int n);
int main()
{
    string st="aabbbbcccccsssss";
    string result="";
    solve(st, result,st.size()-1);
    cout<<result;
}

void solve(string &st, string &result,int n)
{
    if(n==0)
    {
        return;
    }
    if(result.size()==0|| result[result.size()-1]!=st[n])
    {
    
        result.push_back(st[n]);
    }
    solve(st,result,n-1);
    

// 
}