#include<iostream>
using namespace std;
int main()
{
    int row;
    cout<<"enter the side of square : "<<endl;
    cin>>row;
    for(int i=0;i<row;i++)
    {
           for (int i=0;i<row;i++)
           {
            cout<<"*"<<" ";
           }
           cout<<endl;
    }
    return 0;
}