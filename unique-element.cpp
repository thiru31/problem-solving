#include <iostream>
#include <vector>
using namespace std;

void find_unique(vector<int> arr)
{
    int i, flag, j;
    for (i = 0; i < arr.size(); i++)
    {
        flag = 1;
        for (j = 0; j < arr.size(); j++)
        {
            if (j == i)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout<<endl;
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
    cout << "Unique elemenents are :";
    find_unique(arr);

}

