#include <bits/stdc++.h>
using namespace std;

int maxarrsum(int arr[], int n)
{
    int sum = 0;
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=arr[i];
        maxi=max(sum,maxi);
        if (sum<0){
            sum=0;
        }
    }
    return maxi;
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

    
    int ans = maxarrsum(arr, n);

    cout << "\n maxsum of array is: " << ans;

    return 0;
}