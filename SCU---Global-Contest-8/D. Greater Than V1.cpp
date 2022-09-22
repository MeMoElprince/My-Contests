/**
 * @author Mustafa Elsharawy
 * @date 2020-08-23
 */

#include <bits/stdc++.h>
using namespace std;

#define ll long long

void Mustafa()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    #endif
}
int mx(vector < int > &nums, int n)
{
    int l = 0, r = 0;
    int ans = 0;
    int test = 1;
    while(r < n)
    {
        while(r < n && nums[r] >= test)
        {
            test++;
            r++;
        }
        ans = max(r - l, ans);
        if(r < n)
        {   
            l = r - (nums[r] - 1);
            test = nums[r];
        }
    }  
    return ans;
}
int main()
{
    Mustafa();
    ll tt = 1;
    // cin >> tt;
    while(tt--)
    {   
        int n;      cin >> n;
        vector < int > nums(n);
        for(auto & i : nums)    cin >> i;
        int ans1 = mx(nums, n);
        reverse(nums.begin(), nums.end());
        int ans2 = mx(nums, n);
        cout << max(ans1, ans2) << "\n";
    }
    return 0;
}
