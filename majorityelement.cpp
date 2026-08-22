#include <bits/stdc++.h>
using namespace std;

int majorityelement(vector<int> &arr, int n)
{
    int count = 0;
    int element;
    for (int i = 0; i < n; i++)
    {

        if (count == 0)
        {
            count = 1;
            element = arr[i];
        }
        else if (arr[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count2++;
        }
    }
    if (count2 > n / 2)
    {
        return element;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = majorityelement(arr, n);

    cout << ans;

    return 0;
}