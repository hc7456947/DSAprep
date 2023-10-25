#include<iostream>
using namespace std;
int main()
{
    int size,element;
    cout<<"enter the size of the array : \n";
    cin>>size;
    int arr[size];
    cout<<"enter "<<size<<" elements of the array : \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
        return 0;
}