#include <iostream>
#include<unordered_map>
#include<vector>

using namespace std;
void freq(vector<int>&arr)
{
    unordered_map<int, int> freq;
    for(auto x:arr)
    {
        freq[x]++;
    }
    for(auto i:freq)
        cout<<i.first<<" "<<i.second<<endl;
}
int main()
{
    vector<int> arr={2,4,4,7,7,5,0,7,0};
    freq(arr);
}