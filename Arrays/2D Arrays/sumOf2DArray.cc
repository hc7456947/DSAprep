#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[3][4]={{12,45,78,25},{36,25,24,38},{45,56,38,78}};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<"the sum of the elements of the array is : "<<sum;
    return 0;
}