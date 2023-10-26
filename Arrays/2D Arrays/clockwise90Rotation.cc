#include<iostream>
using namespace std;
int main()
{
    int arr[3][4]={{12,45,78,25},{36,25,24,38},{45,56,38,78}};
    int arr90[4][3];
    int element;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
           arr90[j][2-i]=arr[i][j];
          
        }
    }
      
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr90[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}