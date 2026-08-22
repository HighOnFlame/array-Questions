#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = 0;
                break;
            }
        }
        if (leader == 1)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
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

    vector<int> ans = leaders(arr, n);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}