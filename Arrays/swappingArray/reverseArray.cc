#include<iostream>
using namespace std;
int main()
{
    int swap;
    int arr[6]={1,2,3,4,5,6};
     for (int i=0;i<6/2;i++)
     {
       
            swap= arr[i];
       arr[i]=arr[5-i];
       arr[5-i]=swap;
       
      
     }
     for(int i=0;i<6;i++)
     {
        cout<<arr[i]<<" ";
     }
     cout<<endl;
    return 0;
}