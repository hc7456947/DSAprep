#include<iostream>
using namespace std;
int main()
{
    int alt;
    cout<<"enter the altitude of the triangle : ";
    cin>>alt;
    for(int i=0;i<alt;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(i==0 || i==alt-1)
            {
                cout<<"*";
            }
            else
            {
                if(j==0 || j==i)
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