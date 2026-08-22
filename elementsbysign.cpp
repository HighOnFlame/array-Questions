#include <bits/stdc++.h>
using namespace std;

void arrangeelementsbysign(int arr[], int n)
{
    vector<int> pos;
    vector<int> neg;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            neg.push_back(arr[i]);
        }
        else
        {
            pos.push_back(arr[i]);
        }
    }

    for (int i = 0; i < n / 2; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
};

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    arrangeelementsbysign(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}