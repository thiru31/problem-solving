#include <iostream>
#include <vector>
using namespace std;

int main()

{
    int r1, c1, r2, c2;
    r1 = 2;
    c1 = 2;
    r2 = 2;
    c2 = 2;
    int arr1[r1][c1];
    cout << "Enter elements of array 1 : " << endl;
    for (size_t i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c1; j++)
        {
            cin >> arr1[i][j];
        }
    }
    int arr2[r2][c2];
    cout << "Enter elements of array 2 : " << endl;
    for (size_t i = 0; i < r2; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }

    int c[r1][c2], i, j, k;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            int ans = 0;
            for (k = 0; k < r2; k++)
            {
                ans += arr1[i][k] * arr2[k][j];
            }
        c[i][j] = ans;
        }
    }
    for (size_t i = 0; i < r1; i++)
    {
        for (size_t j = 0; j < c2; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}