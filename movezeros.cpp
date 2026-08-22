#include<bits/stdc++.h>
using namespace std;

void movezeros(vector<int>&arr){
    int n= arr.size();
    int j = -1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1){
        return;
    }
    for(int i=j+1;i<n;i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    // T.C = O(n)
    // S.C = O(1)
} 

void movezeros2(vector<int>&arr){
    vector<int>temp;
    int n = arr.size();

    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }

    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    
    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
    // T.C = O(n)
    // S.C = O(n)

}

int main(){

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    movezeros(arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}