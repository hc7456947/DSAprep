#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,3,3,5};
    int element;
    cout<<"enter the element u want to delete : ";
    cin>>element;
    int oldSize=sizeof(arr)/sizeof(arr[0]);
    int size=0;
    for(int  i=0;i<oldSize;i++)
    {
      if(arr[i]!=element)
      {
         arr[size++]=arr[i];
      }
    }
    oldSize=size;
    for(int i=0;i<  oldSize;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}