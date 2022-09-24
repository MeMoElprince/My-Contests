/**
 * @author Mustafa Elsharawy
 * @date 2020-08-23
**/

#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
struct rock
{
    int left, right, sec;
};
ll n, x, d, k;
vector < rock > nums;

map < ll, multiset < ll > > costs; 
//  0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20
//                                                                                  X
vector < ll > pass;
ll sol(int idx, int move = 0, ll tot = 0)
{
    if(idx < 0)
        return LONG_LONG_MAX;
    if(move == 12 || idx == d)
    {
        return tot + (d - idx);
    }

    ll cost = 0;
    ll costRight = 0;
    ll costLeft = 0;

    int a = move + 1;

    costRight = costs[idx+1].count(a) * k;
    cost = costs[idx].count(a) * k;
    costLeft = costs[(idx-1)].count(a) * k;
    ll ans1 = sol(idx + 1, move + 1, tot + costRight + 1);
    ll ans2 = sol(idx, move + 1, tot + cost + 1);
    ll ans3 = sol(idx - 1, move + 1, tot + costLeft + 1);
    return min({ans1, ans2, ans3});
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    fast
    int tt = 1;
    // cin >> tt;
    // assert(tt >= 1 && tt <= 100);
    while(tt--)
    {
        cin >> n >> x >> d >> k;

        nums.assign(n, {0, 0, 0});
        for(auto & i : nums)        cin >> i.left >> i.right >> i.sec;
        costs[0].insert(0);
        for(ll i = max(x - 12, 0ll); i <= x + 12; i++)
        {
            for(auto & it : nums)
            {
                if(it.left <= i && it.right >= i)
                    costs[i].insert(it.sec);
            }
        }

        cout << sol(x) << "\n";
    }
    return 0;
}
