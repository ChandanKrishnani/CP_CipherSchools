#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> abc={1,2,4,5,6};
    int a=abc[0],b=1;
    for(int i=1;i<abc.size();i++)
    {
        a=a ^ abc[i];
    }
    for(int i=2;i<=abc.size()+1;i++)
    {
        b=b^i;
    }
    int miss =a^b;
    cout<<"Missing number is "<<miss;
}
