#include<iostream>
using namespace std;
int main()
{
    int size1,size2;
    
    cout<<"enter the size of the first array : ";
    cin>>size1;
    int arr1[size1];
    for(int i=0;i<size1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the size of the second array : ";
    cin>>size2;
    int arr2[size2];
    for(int i=0;i<size2;i++)
    {
        cin>>arr2[i];
    }
    for(int i=0;i<size1;i++)
    {
        cout<<arr1[i]<<" ";

    }
    cout<<endl;
    for(int i=0;i<size2;i++)
    {
        cout<<arr2[i]<<" ";
    }
    int arr3[size1+size2];
    for(int i=0;i<size1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(int i=0;i<size2;i++)
    {
        arr3[i+size1]=arr2[i];
    }
    for(int i=0;i<size1+size2;i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}