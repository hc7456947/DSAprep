#include<iostream>
using namespace std;
int main()
{
    int arr[6]={1,0,20,9,15,101};
    int num=0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>num)
        {
            num=arr[i];
        }
    }
    cout<<num;
    return 0;
}