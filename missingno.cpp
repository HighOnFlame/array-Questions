#include<bits/stdc++.h>
using namespace std;

int missingnumber(vector<int>& arr, int n){

    int sum = 0;

    int total = n * (n + 1) / 2;

    for(int i=0;i<n-1;i++){
        sum += arr[i];
    }

    return total - sum;
}

int main(){

    int n;
    cin >> n;

    vector<int> arr(n-1);

    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }

    int ans = missingnumber(arr, n);

    cout << "Missing number is : " << ans;

    return 0;
}