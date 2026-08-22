#include <bits/stdc++.h>
using namespace std;

vector<int> twosum(vector<int>&arr, int n, int target){

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == target){
                return {i, j};
            }
        }
    }
    return {-1, -1};

}

vector<int> TwoSum(vector<int>&arr, int n, int target){
    map<int,int> mpp;
    
    for(int i=0;i<n;i++){
        int nums = arr[i];
        int moreneed = target - nums;
        if(mpp.find(moreneed) != mpp.end()){
            return {mpp[moreneed],i};
        }
        mpp[nums]=i;
    }
    return {-1,-1}; 
}

int main()
{

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }


    int target;
    cout<<"Enter target element : "<<endl;
    cin >> target;

    vector<int> ans = TwoSum(arr, n, target);

    if (ans[0] == -1)
    {
        cout << "sum not possible";
    }
    else
    {
        cout << "Element found at index: " << ans[0] << " and " << ans[1];
    }

    return 0;
}