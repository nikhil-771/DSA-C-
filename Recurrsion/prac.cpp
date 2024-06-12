#include <iostream>
#include <vector>

using namespace std;


void substrings(string st, int index, string output, vector<string>&ans);
int main()
{
    string st = "ABC";
    vector<string> ans;
    string output="";
    substrings(st, 0, output, ans);
    for(auto it:ans)
        cout<<it<<endl;
    return 0;
}

void substrings(string st, int index, string output, vector<string>&ans)
{
    if(index==st.size())
    {
        if(output.size()>0)
            ans.push_back(output);
        return;w
    }

    substrings(st, index+1, output,ans);
    char el = st[index];
    output.push_back(el);
    substrings(st, index+1, output,ans);
}