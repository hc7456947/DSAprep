#include<iostream>
using namespace std;
int main()
{
    int arr[6]={21,14,16,36,12,5};
    int small=arr[0];
    for(int i=0;i<6;i++)
    {
       if(arr[i]<small)
       {
        small=arr[i];
       }
       
    }
    cout<<small;
    return 0;
}