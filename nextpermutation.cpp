#include <bits/stdc++.h>
using namespace std;

void nextpermutation2(int arr[], int n)
{
    int index = -1;

    // Step 1: Find the breakpoint
    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }

    // If no breakpoint, array is the last permutation
    if(index == -1)
    {
        reverse(arr, arr + n);
        return;
    }

    // Step 2: Find the smallest element greater than arr[index]
    for(int i = n - 1; i > index; i--)
    {
        if(arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }

    // Step 3: Reverse the remaining part
    reverse(arr + index + 1, arr + n);
}

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    nextpermutation2(arr, n);

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}