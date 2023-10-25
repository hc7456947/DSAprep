#include<iostream>
using namespace std;
int main()
{
    int side;
    cout<<"enter the side : ";
    cin>>side;
    cout<<endl;
    for(int i=0;i<side;i++)
    {
        for (int j=0;j<side;j++)
        {
            if(i==0 || i==side-1)
            {
                cout<<"*"<<" ";
            }
           // cout<<endl;
            else
            {
               if(j==0 || j==side-1)
               {
                cout<<"*"<<" ";
               }
               else{
                cout<<"  ";
               }
            }
        }
        cout<<endl;
    }
    return 0;
}
