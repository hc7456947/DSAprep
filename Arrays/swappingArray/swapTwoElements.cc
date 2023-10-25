#include<iostream>
using namespace std;
int main()
{
    cout<<"enter 5 elements of the array :";
    int n=5,element;
    int arr[n];
    for(int i=0;i<n;i++)
    {
       cin>> arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ind1,ind2;
    cout<<"enter the indexes you want to swap :";
    cin>>ind1>>ind2;
    int first=arr[ind2];
    arr[ind2]=arr[ind1];
    arr[ind1]=first;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}