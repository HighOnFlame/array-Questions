#include <bits/stdc++.h>
using namespace std;

vector<int> double_array(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(2 * n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = nums[i];
        ans[i + n] = nums[i];
    }
    return ans;
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> ans2 = double_array(nums);

    for (int i = 0; i < ans2.size(); i++){
        cout << ans2[i] << " ";
    }

    return 0;
}