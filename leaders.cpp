#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &arr, int n){
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        bool leader = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                leader = 0;
                break;
            }
        }
        if (leader == 1)
        {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
vector<int> leaders2(vector<int> &arr, int n){
    vector<int> ans;
    int maxi= INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
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

    vector<int> ans = leaders2(arr, n);

    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}