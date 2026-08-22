#include <bits/stdc++.h>
using namespace std;

int maxsubsumk(vector<int> &arr, int n, int k)
{
    int length = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                length = max(length, j - i + 1);
            }
        }
    }
    return length;
}
int maxsubsumk2(vector<int> &arr, int n, int k)
{
    int left = 0, right = 0, maxlength = 0;
    long long sum = arr[0];
    while (right < n)
    {
        while (sum > k && left <= right)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxlength = max(maxlength, right - left + 1);
        }
        right++;

        if (right < n)
        {
            sum += arr[right];
        }
    }
    return maxlength;
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

    int k;
    cout << "Enter value of Sum: " << endl;
    cin >> k;

    int ans = maxsubsumk2(arr, n, k);

    cout << ans;

    return 0;
}