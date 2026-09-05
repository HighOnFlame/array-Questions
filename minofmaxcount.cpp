// arr = [101,101,102,103,101,102,104,102,105]
// 101---3 times
// 102---3 times
// 103---1 times
// 104---1 times
// 105---1 times
// output = 101(because 101<102) maxcount = 3

#include <bits/stdc++.h>
using namespace std;

int minofmaxcount(vector<int> nums)
{
    int n = nums.size();
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[nums[i]]++;
    }

    int maxi = 0;      //stores count
    int answer = -1;   //stores number

    for (auto it : mpp)
    {
        int number = it.first; 
        int count = it.second;

        if (count > maxi)
        {
            maxi = count;
            answer = number;
        }
        else if(count == maxi && number < answer){
            answer= number;
        }

        
    }
    return answer;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans = minofmaxcount(nums);
    cout << ans;
    return 0;
}
