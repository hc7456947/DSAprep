#include<iostream>
using namespace std;

int main()
{
    int num = 0;
    int arr[6] = {47, 12, 35, 78, 95, 52};
    
    int maxIndex = 0;  
    int maxLength = 1; 
    int currIndex = 0; 
    int currLength = 1; 

    for (int i = 1; i < 6; i++)
    {
        if (arr[i] > arr[i - 1]) {
            currLength++;
        }
        else {
            currIndex = i;
            currLength = 1;
        }

        if (currLength > maxLength) {
            maxIndex = currIndex;
            maxLength = currLength;
        }
    }

    cout << "Maximum increasing subarray: ";
    for (int i = maxIndex; i < maxIndex + maxLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
