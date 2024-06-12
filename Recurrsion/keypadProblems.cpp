#include <iostream>
#include<vector>
using namespace std;

void solve(vector<string>&ans,string digit, string output, string arr[], int index);


int main()
{
    string arr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string st="",output="";
    vector<string>ans;
    int index = 0;
    cout<<"enter digit :";
    cin>>st;

    solve(ans,st,output,arr,index);
    
    if(ans.empty())
    {
        cout<<"No combination ";
        return 0;
    }
    for(auto i:ans)
    {
        cout<<"[";
        for(auto j:i)
        {
            cout<<j;
            
        }
        cout<<"]"<<endl;
    }

}

void solve(vector<string>&ans,string digit, string output, string arr[],int index)
{
    if(index == digit.length())
    {  
        ans.push_back(output);
        return;
    }
    int n = digit[index]-'0';
    string value=arr[n];

    for(auto c: value)
    {
        solve(ans, digit, output+c, arr, index+1);
    }
}