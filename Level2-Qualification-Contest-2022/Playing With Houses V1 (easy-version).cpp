/**
 * @author Mustafa Elsharawy
 * @date 2020-08-23
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    fast
    int tt = 1;
    // cin >> tt;
    while(tt--)
    {
        int n;          cin >> n;
        vector < int > nums(n);
        for(auto & i : nums)        cin >> i;
        vector < int > ans;
        vector < int > values(1001);
        for(int i = n-1; i >= 0; i--)
        {
            values[nums[i]]++;
            int cnt = 0;
            for(int it = nums[i] + 1; it <= 1000; it++)
            {
                cnt += values[it];
            }
            ans.push_back(cnt);
        }
        reverse(ans.begin(), ans.end());
        for(auto & i : ans)     cout << i << ' ';
        cout << "\n";
    }
    return 0;
}
