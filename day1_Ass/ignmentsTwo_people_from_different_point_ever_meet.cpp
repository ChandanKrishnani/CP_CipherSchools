#include<iostream>
using namespace std;
int evermeet(int x1,int x2,int v1,int v2)
{
    if((x1 < x2 && v1<=v1) || (x2<x1 && v2<=v1 ))
     return 0;
    if(x1<x2)
    {
        swap(x1,x2);
        swap(v1,v2);
    }
    //method to find relative speed i
    return ((x1-x2)%(v1-v2)==0);

    

}
int main()
{
    int x1=6,v1=5,x2=4,v2=8;
    if(evermeet(x1,x2,v1,v2))
    {
        cout<<"yes";

    }
    else 
    {
        cout<<"NO";
    }
    return 0;


    
    return 0;


}
