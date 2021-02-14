#include<iostream>
#include<vector>
using namespace std;
int majority(vector<int> jk)
{
    int majority,count;
    count=1;
    majority=jk[0];
    for(int i=1;i<jk.size();i++)
    {
        if(majority==jk[i])
        {
            count++;
           continue;
        }
        --count;
        if(count==0)
        {
            majority=jk[i];
            ++count;
        }
    }
    return (majority);
}
int majoritycheck(vector<int>jk)
{
    int num=majority(jk);
    int count=0;
    for(int i=0;i<jk.size();i++)
    {

        if(num==jk[i])
        {
            ++count;
        }
    }
   
    if(count>(jk.size()/2))
    {
        return num;
    }
    return 0;


}
int main()
{
    vector <int> jk={1,1,1,1,1,1,1,2,3,4,4,4};
    int j=0;
    j=majoritycheck(jk);
    if(j>0)
    {
        cout<<" Yes have majority  : "<<j;
    }
    else
    {
        cout<<"No we dont have any majority element";

    }

}
