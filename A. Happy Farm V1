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
        int n, x;       cin >> n >> x;
        int sum = 0, res = 0;
        vector < int > nums(n);
        for(auto & i : nums)    cin >> i;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < n; i++)
        {
            if(sum + (nums[i]*n) <= x)
                res++, sum += (nums[i]*n);
            else
                break;
        }
        cout << res << "\n";
    }
    return 0;
}
