#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,4,3,7};
    int element;
    cout<<"enter the element u want to insert at the end of the array : ";
    cin>>element;
    arr[4]=element;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}