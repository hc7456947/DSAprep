#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{12,45,78,25},{36,25,24,104},{45,56,38,78}};
    int temp=arr[0][0];
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]>temp)
            {
                temp=arr[i][j];
            }
        }
     }
     cout<<"the maximum element of the array is : "<<temp;
    return 0;
}