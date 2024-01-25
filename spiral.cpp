#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;

    vector<vector<int>> vec(m, vector<int>(n));
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << vec[i][j];
        }
        cout << endl;
    }
}
