#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void return_square(vector<int> &arr)
{
    for(int &ele:arr)
    {
        ele=pow(ele,2);
        // ele*=ele;
        //Another logic for squares
    }
    for (int &ele : arr)
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
    cout << "Squares of the array elements :";
    return_square(arr);
}