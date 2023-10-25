#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,3,43,5,7};
    for(int i=5;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=23;
    for(int i=0;i<6;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}