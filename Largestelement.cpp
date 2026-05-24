#include <bits/stdc++.h>
using namespace std;

int LargestElement(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
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

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    int ans = LargestElement(arr, n);

    cout << "\nLargest element is: " << ans;

    return 0;
}