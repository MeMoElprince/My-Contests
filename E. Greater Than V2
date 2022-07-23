/**
 * @author Mustafa Elsharawy
 * @date 2020-08-23
**/

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
int bs(vector < ll > & nums, int idx, int target)
{
    int l = 0, r = idx, best = 0;
    while(l <= r)
    {
        int m = l + (r - l) / 2;
        (nums[m] >= target ? r = m - 1, best = idx - m : l = m + 1);
    }
    return best;
}
int main()
{
    Mustafa();
    ll tt = 1;
    cin >> tt;
    while(tt--)
    {   
        int n;          cin >> n;
        vector < int > nums(n);
        for(auto & i : nums)    cin >> i;
        vector < ll > pfx_odd = {0}, pfx_even = {0};
        for(int i = 0; i < n; i++)
        {
            if(i%2 == 0)
            {
                if(nums[i] >= 1)
                {
                    pfx_even.push_back(pfx_even.back());
                }
                else
                {
                    pfx_even.push_back(pfx_even.back()+1);
                }

                if(nums[i] >= 2)
                    pfx_odd.push_back(pfx_odd.back());
                else
                    pfx_odd.push_back(pfx_odd.back() + 1);
            }
            else
            {
                if(nums[i] >= 1)
                {
                    pfx_odd.push_back(pfx_odd.back());
                }
                else
                {
                    pfx_odd.push_back(pfx_odd.back()+1);
                }

                if(nums[i] >= 2)
                    pfx_even.push_back(pfx_even.back());
                else    
                    pfx_even.push_back(pfx_even.back()+ 1);
            }
        }
        int ans = 0, l = 0;
        while(l < n)
        {
            int cnt = 0;
            int x = 1;
            int idx = l + 1;
            if(l < n)
            {
                if(idx % 2 == 0)
                {
                    cnt = bs(pfx_odd, l, pfx_odd[l]);
                } 
                else
                {
                    cnt = bs(pfx_even, l, pfx_even[l]);
                }
            }
            while (l < n && nums[l] >= x)
            {
                l++, cnt++;
                x = (x == 1 ? 2 : 1);
            }
            ans = max(ans, cnt);
            if(l < n && nums[l] <= 0)
                l++;
        }
        cout << ans << "\n";
    }
    return 0;
}
