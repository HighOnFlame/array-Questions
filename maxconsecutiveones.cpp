#include<bits/stdc++.h>
using namespace std;

int maxiconsecutiveones(vector<int>&arr, int n){
    int maxi = 0, count = 0; 
    for(int i = 0;i < n; i++){
        if(arr[i]==1){
            count++;
            maxi=max(count,maxi);
        }
        else{
            count = 0;
        }    
    }
    return maxi;
}

int main(){
    int n; 
    cin >> n;
    vector<int>arr(n);
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }

    int ans = maxiconsecutiveones(arr,n);

    cout<< ans;


    return 0;
}