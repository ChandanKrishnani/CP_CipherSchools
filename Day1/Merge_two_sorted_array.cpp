#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector <int> arr1={1,2,3,4,6};
    vector <int> arr2={3,5,7,8,9};
    int i=0,j=0,k=0;
    vector <int> arr3(arr1.size()+arr2.size());
    while(i<arr1.size() && j<arr2.size())
    {
        if(arr1[i]<=arr2[j])
        {
           arr3[k]=arr1[i];
            i++;
            k++;
            continue;
        }
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    while(i<arr1.size())
    {
        arr3[k]=arr1[i];
        i++;
        k++;

    }
    while(j<arr2.size())
    {
        arr3[k]=arr2[j];
        j++;
        k++;

    }

    for(int i=0;i<arr3.size();i++)
    {
        cout<<arr3[i];

    }

}
