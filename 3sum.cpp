#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{
    int n = nums.size();
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        set<int> hashset;
        for (int j = i + 1; j < n; j++)
        {
            int moreneed = -(nums[i] + nums[j]);

            if (hashset.find(moreneed) != hashset.end())
            {
                vector<int> temp = {nums[i], nums[j], moreneed};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(nums[j]);
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
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

    vector<vector<int>> ans2 = threeSum(nums);

    for (auto triplet : ans2)
    {
        for (auto x : triplet)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}