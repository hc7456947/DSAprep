#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter height of the triangle : ";
    cin>>alt;
    for(int i=0;i<alt;i++)
    {
        for(int k=alt;k>i;k--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}