#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter the height of the triangle : ";
    cin>>alt;
    for (int i=0;i<alt;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<" ";

        }
        for(int k=0;k<alt-i;k++){
            cout<<"*";
        }
cout<<endl;
    }
    return 0;
}