#include<iostream>
using namespace std;
int main()
{
    int value;
    int arr[5]={1,2,3,4,5};
    cout<<"enter the target value :";
    cin>>value;
    arr[value]=value;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}