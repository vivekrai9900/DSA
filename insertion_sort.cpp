#include <bits/stdc++.h>
#include <vector>
using namespace std;
void insertionSort(int n, vector<int> &arr)
{
    int i = 1;
    int count = 0;
    while (i < n)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            count++;
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
            
            j--;

            for (int k = 0; k < n; k++)
            {
                cout << arr[k];
                cout << " ";
            }
                cout << " \n";
        }

        arr[j + 1] = temp;
        i++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
        cout << " ";
    }
                cout << " \n";

    cout << "the count is : " << count;
}

int main()
{
    vector<int> arr = {5, 70, 20, 9, 500, -230, -2, 45, 36, -0, 98, -23, 900, 1};

    insertionSort(14, arr);

    return 0;
}