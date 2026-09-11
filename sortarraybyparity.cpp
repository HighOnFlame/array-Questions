// Input: nums = [3,1,2,4]
// Output: [2,4,3,1]
// Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.

#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int> &nums)
{
    int n = nums.size();
    int i = 0, j = n - 1;
    while (i <= j){
        if (nums[i] % 2 != 0)
        {
            swap(nums[i], nums[j]);
            j--;
        }
        else
        {
            i++;
        }
    }
    return nums;
}
;

int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans=sortArrayByParity(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
