#include <bits/stdc++.h>
using namespace std;

int linearsearch(vector<int> arr, int target)
{
    int n = arr.size();

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int LongestConsecutive(vector<int>& arr)
{
    int n = arr.size();
    int longest = 1;

    for(int i = 0; i < n; i++)
    {
        int x = arr[i];
        int count = 1;

        while(linearsearch(arr, x + 1) != -1)
        {
            x = x + 1;
            count++;
        }

        longest = max(longest, count);
    }

    return longest;
}
int LongestConsecutive2(vector<int>& arr){
    int n = arr.size();
    if(n==0) return 0;
    int longest = 1;
    unordered_set<int>st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                count++;
                x=x+1;
            }
            longest = max(longest,count); 
        }   
    }
    return longest;
    
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = LongestConsecutive2(arr);

    cout << "Longest consecutive sequence length: " << ans;

    return 0;
}