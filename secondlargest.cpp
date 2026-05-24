#include <bits/stdc++.h>
using namespace std;

int Secondlargest(int arr[], int n){

    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    int secondlargest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondlargest && arr[i] != largest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
    
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
        cout << arr[i] << " "<<endl;
    }
    int ans = Secondlargest(arr, n);

    cout << "Second Largest element is: " << ans;

    return 0;
}