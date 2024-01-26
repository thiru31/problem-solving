#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr.push_back(10);
    for (int ele : arr)
        cout << ele << " ";
    cout << endl;
    arr.insert(arr.begin()+3,100);
    arr.pop_back();
    arr.erase(arr.begin()+1);
    arr.erase(arr.begin()+1);
    cout<<arr[1]<<endl;
    for (int ele : arr)
        cout << ele << " ";
}