#include <iostream>
#include <vector>
using namespace std;

void prefix_sum(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        arr[i] += arr[i - 1];
    }
    for (int ele : arr)
        cout << ele << " ";
}

int main()
{
    int size;
    cout << "Enter the size of array :";
    cin >> size;
    vector<int> arr(size);
    cout << "Enter the array elements :";
    for (int &ele : arr)
    {
        cin >> ele;
    }
    cout << "prefix sum array is :";
    prefix_sum(arr);
}