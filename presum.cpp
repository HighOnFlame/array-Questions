#include<bits/stdc++.h>
using namespace std;

vector<int>presum(vector<int>arr){
    int n = arr.size();
    for(int i= 1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
    return arr;

};

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>ans=presum(arr);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}