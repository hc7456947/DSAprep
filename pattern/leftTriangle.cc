#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter the height of the triangle : ";
    cin>>alt;
   // int j=0;
    for(int i=0;i<alt;i++)
    {
        for(int j=0;j<=i;j++){
              cout<<"*"<<" ";
        }
        cout<<endl;

    }
    return 0;
}