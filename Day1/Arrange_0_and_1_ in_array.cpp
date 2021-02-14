#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> abc={0,1,0,1,0,1};
    int count=0;
    for(int i=0;i<abc.size();i++)
    {
        if(abc[i]==0)
        {
           
            ++count;
        }
    }
    for(int i=0;i<abc.size();i++)
    {
        if(count !=0 )
        {
            abc[i]=0;
            count=count-1;
        }
        else
        {
            abc[i]=1;
        }
        cout<<abc[i];

    }
}
