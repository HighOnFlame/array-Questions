#include<bits/stdc++.h>
using namespace std;


// Brute force 
int singlenumber1(int arr[], int n){ 
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
}

// Hash array 
int singlenumber(int arr[], int n)
{
    int maxi = arr[0];

    // Find maximum element
    for(int i = 0; i < n; i++)
    {
        maxi = max(maxi, arr[i]);
    }

    // Create hash array
    int hash[maxi + 1] = {0};

    // Store frequency
    for(int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // Find element occurring once
    for(int i = 0; i < n; i++)
    {
        if(hash[arr[i]] == 1)
        {
            return arr[i];
        }
    }

    return -1;
}

// Hashmaps
int singlenumber1_2(int arr[], int n){
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second == 1){
            return it.first;
        }
    }
    return -1;
}

// XOR 
int singlenumber1_3(int arr[], int n){
    int Xor = 0;
    for(int i=0;i<n;i++){
        Xor = Xor ^ arr[i];
    }
    return Xor;
}

int main(){

    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans = singlenumber1_3(arr,n);

    cout<<ans;

    return 0;
}