#include<iostream>
using namespace std;
int main()
{
  int sum=0;
    int arr[4]={1,2,3,4};
  for(int i=0;i<4;i++)
  {
    
    for(int j=i;j<4;j++)
    {
  int subSum=0;
        for (int k=i;k<=j;k++)
        {
          cout<<arr[k]<<" ";
                 subSum+=arr[k];
            
          }
          if(subSum>sum)
          {
            sum=subSum;
          }
        cout<<endl;
        }
    }
  
  cout<<"The sum is :"<<sum;
    return 0;
}