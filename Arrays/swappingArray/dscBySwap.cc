#include<iostream>
using namespace std;
int main()
{
        int temp;
    int arr[5]={12,54,78,89,98};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
          if(arr[j]>arr[i])
          {
            temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
          }
        }
    }
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}