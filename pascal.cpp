#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int rows = 8;
    for (size_t i = 1; i < rows; i++)
    {
        for (size_t j = 1; j < rows - i + 1; j++)
        {
            cout << " ";
        }
        int c = 1;
        for (size_t k = 1; k <= i; k++)
        {
            cout << c<<" ";
            c = c * (i - k) / k;
        }

        cout << endl;
    }
}