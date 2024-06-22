#include <iostream>
#include<map>
#include<climits>
#include<vector>

using namespace std;
void freq1(vector<int>&arr)
{
    map<int, int> freq;
    for(auto x:arr)
    {
        freq[x]++;
    }
    for(auto i:freq)
        cout<<i.first<<" "<<i.second<<endl;
    int minFreq=INT_MAX, minFreqElem;
    int maxFreq=INT_MIN, maxFreqElem;
    for(auto i:freq)
    {
        if(i.second< minFreq)
        {
            minFreq=i.second;
            minFreqElem = i.first;
        }
        if(i.second > maxFreq)
        {
            maxFreq = i.second;
            maxFreqElem = i.first;
        }
    }
    cout << "Element with minimum frequency: " << minFreqElem << " occurring " << minFreq << " times" << endl;
    cout << "Element with maximum frequency: " << maxFreqElem << " occurring " << maxFreq << " times" << endl;
}




int main()
{
    vector<int> arr={2,4,4,7,7,5,0,7,0};
    cout<<"-------------------------";
    cout<<"\nOUTPUT1\n";
    freq1(arr);
    cout<<"-------------------------";
    
} 