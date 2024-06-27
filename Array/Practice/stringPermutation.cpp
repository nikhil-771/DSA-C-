#include <iostream>
#include <vector>
using namespace std;


void display(vector<string>ans);
void permutations(int in, bool*marked, string str, string st, vector<string> &ans, int n);
int main()
{
    string str = "nik";
    string st = "";
    bool marked[str.size()] = {false};
    vector<string>ans;
    permutations(0, marked, st ,str ,ans,str.size());
    display(ans);
}


void permutations(int in, bool*marked, string str, string st, vector<string> &ans, int n)
{
    if(in == n)
    {
        ans.push_back(str);
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(marked[i] == true)
        {
            continue;
        }
        str.push_back(st[i]);
        marked[i] = true;
        permutations(in+1, marked, str, st, ans, n);
        str.pop_back();
        marked[i] = false;
        
    }
}


void display(vector<string>ans)
{
    for(auto it: ans)
    {
        cout<<it<<"\n";
    }
}