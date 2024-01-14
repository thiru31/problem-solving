#include <iostream>
#include <vector>
#include<algorithm>
// #include <bits/stdc++.h>
using namespace std;

int sec_large(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int res = arr[arr.size() - 2];
    return res;
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
    cout << "2nd Largest Element is :";
    cout << sec_large(arr);
}