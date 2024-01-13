#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    int tsum;
    cin >> size;
    cin >> tsum;
    vector<int> arr(size);
    for (int &ele : arr)
    {
        cin >> ele;
    }
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int a = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (a + arr[j] == tsum)
            {
                count++;
            }
        }
    }
    cout << "pairs :" << count;
}