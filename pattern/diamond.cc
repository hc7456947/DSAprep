#include <iostream>
using namespace std;
int main()
{
    int alt;
    cout << "enter the height of the diamond : ";
    cin >> alt;
    for (int i = 0; i < alt / 2; i++)
    {
        for (int j = 0; j < alt / 2 - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= 2 * i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < alt / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < alt - 2 * i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}