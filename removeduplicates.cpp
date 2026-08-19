#include <bits/stdc++.h>
using namespace std;

int removeduplicates(int arr[], int n)
{
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr[i]);
    }

    int index = 0;
    for (auto it : st)
    {
        arr[index] = it;
        index++;
    }
    return index;
}

int removeduplicates2(int arr[], int n){
    int i = 0;
    for(int j =1;j<n;j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = removeduplicates2(arr, n);

    cout << ans << endl;

    for (int i = 0; i < ans; i++)
    {
        cout << arr[i] << " ";
    
    }
    return 0;
}