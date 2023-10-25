#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter the height of triangle : ";
    cin>>alt;
    for(int i=0;i<alt;i++){
           for(int j=1;j<alt-i;j++){
                 cout<<" ";
           }
           for(int k=0;k<=i;k++){
              cout<<"*";
           }
           cout<<endl;
    }
    return 0;
}