#include<iostream>
using namespace std;
int main()
{
    int arr[5]={14,25,45,69};
    int index,num;
    cout<<"enter the index u want to insert the element : \n";
    cin>>index;
    cout<<"enter the element u want to insert : \n";
    cin>>num;
    for(int i=5;i>index-1;i--)
    {
         arr[i]=arr[i-1];
         
    }
    arr[index]=num;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0;
}