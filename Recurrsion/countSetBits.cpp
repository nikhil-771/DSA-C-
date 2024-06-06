#include <iostream>
using namespace std;

int count(int num);
int main()
{
    for(int i=0; i<=25; i++)
    {
        cout<<i<<" "<<count(i)<<endl;
    }
}

int count(int num)
{
    if(num>0)
        return (num&1)+ count(num>>1);
    return 0;
}