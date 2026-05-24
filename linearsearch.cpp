#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int>arr, int target){

    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;

}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    int target;
    cin>>target;


    int ans = linearsearch(arr, target);

    if(ans == -1){
        cout << "Element not found";
    }
    else{
        cout << "Element found at index: " << ans;
    }

    return 0;
}