#include <iostream>
using namespace std;

void rev1(int num);
int rev2(int num, int res=0);

int main()
{
    int num =8735;
    cout<<"Output1 : ";
    rev1(num);
    cout<<"\nOUTPUT2 : "<<rev2(num);
}

void rev1(int num)
{
    if(num==0)
        return;
    cout<<num%10;
    rev1(num/10);
}

int rev2(int num,int res)
{
    if(num==0)
    {
        return res;
    }
        res=res*10+num%10;
        return rev2(num/10,res);
}
