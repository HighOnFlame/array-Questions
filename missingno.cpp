#include <bits/stdc++.h>
using namespace std;

int missingnumber(vector<int> &arr, int n)
{
    int sum = 0;

    int total = n * (n + 1) / 2;

    for(int i = 0; i < n - 1; i++)
    {
        sum += arr[i];
    }

    return total - sum;
}

int missingnumber2(vector<int> &arr, int n)
{
    int hash[n + 1] = {0};

    for(int i = 0; i < n - 1; i++)
    {
        hash[arr[i]]++;
    }

    for(int i = 1; i <= n; i++)
    {
        if(hash[i] == 0)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n - 1);

    for(int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    int ans = missingnumber2(arr, n);

    cout << "Missing number is : " << ans;

    return 0;
}