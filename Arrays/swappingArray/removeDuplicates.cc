#include<iostream>
using namespace std;
int main()
{
    int temp;
    
    int arr[5]={11,23,11,23,43};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[j]==arr[i])
            {
                   temp=arr[j];
                for(int k=j;k<5;k++)
                {
                   arr[k]=arr[k+1];
                }
                arr[4]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}