#include<iostream>
using namespace std;
int main()
{
    int arr1[6]={1,2,3,4,7,8};
    int arr2[5]={2,4,15,46,101};
    int size3=(sizeof(arr1)/sizeof(arr1[0]))+(sizeof(arr2)/sizeof(arr2[0]));
    int arr3[size3];
    for(int i=0;i<6;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<5;i++)
    {
        arr3[i+6]=arr2[i];
    }
    for(int i=0;i<size3;i++)
    {
        cout<<arr3[i]<<" ";
    }
    cout<<endl;
    int min;
    for(int i=0;i<size3;i++)
    {
        for(int j=1+i;j<size3;j++)
        {
            if(arr3[i]>arr3[j])
            {
              min=arr3[i];
              arr3[i]=arr3[j];
              arr3[j]=min;
            }
        }
    }
    for(int i=0;i<size3;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}