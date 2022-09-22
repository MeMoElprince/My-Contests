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
 
int main()
{
    Mustafa();
    ll tt = 1;
    // cin >> tt;
    while(tt--)
    {   
        ll n, x;       cin >> n >> x;
        ll sum = 0, res = 0;
        vector < ll > nums(n);
        for(auto & i : nums)    cin >> i;
        for(int i = 0; i < n; i++)
        {
            nums[i] *= n - i;
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(sum + nums[i] <= x)
                sum += nums[i], res++;
            else
                break;
        }
        cout << res << "\n";
    }
    return 0;
}
