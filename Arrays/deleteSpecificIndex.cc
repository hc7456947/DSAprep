#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,3,2,7,9};
    int index;
    cout<<"enter the index u want to delete : ";
    cin>>index;
    for(int i=index;i<5;i++)
    {
        arr[i]=arr[i+1];
    }
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}