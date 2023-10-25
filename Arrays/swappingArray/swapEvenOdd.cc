#include<iostream>
using namespace std;
int main()
{
    int temp;
    int arr[5]={12,43,76,66,89};
    for(int i=0;i<5;i++)
    {
        if((arr[i]%2)!=0)
        {
                  temp=arr[i];
            for(int j=i;j<5;j++)
            {
                  arr[j]=arr[j+1];
            }
                  arr[4]=temp;
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}