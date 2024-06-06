#include <iostream>
#include <vector>
using namespace std;

void substring(string st, vector<string>&ans, int index,string output);
int main()
{
    string st="Nik";
    vector<string>ans;
    string output="";
    substring(st,ans,0,output);
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
}

void substring(string st, vector<string>&ans, int index, string output)
{
    if(index==st.size())
    {
        if(output.length()>0)//To add non-empty string only
            ans.push_back(output);
        return;
    }
    //exclude
    substring(st,ans,index+1,output);

    //include
    // string element(1, st[index]);
    char el=st[index];
    output.push_back(el);
    substring(st,ans,index+1,output);
}