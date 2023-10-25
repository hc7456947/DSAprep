#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter the height of the pyramid : ";
    cin>>alt;
    for(int i=0;i<alt;i++){
           for(int j=0;j<i;j++)
           {
            cout<<" ";
           }
           for(int k=0;k<=2*alt-2*i-2;k++)
           {
            cout<<"*";
           }
           cout<<endl;
    }
    return 0;

}