#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter the height of the pyramid : ";
    cin>>alt;
    for(int i=0;i<alt;i++)
    {
        for(int j=0;j<alt-i;j++){
        cout<<" ";
        }
        
        for(int k=0;k<=2*i;k++)
    {
      if(i==0 || i==alt-1)
      {
        cout<<"*";
      }
      else{
        if(k==0 || k==2*i)
        {
            cout<<"*";

        }
        else{
            cout<<" ";
        }
      }
      
    }
    cout<<endl;
    }
    
    return 0;
}