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
int n;
vector < vector < ll > > nums;
ll memo[2][100007];

ll max_hight(int idx, bool x)
{
    if(idx == n)
    {
        return 0;
    }
    if(memo[x][idx] != -1)
        return memo[x][idx];
    return memo[x][idx] = max(max_hight(idx+1, x), nums[x][idx] + max_hight(idx+1, !x));
}

int main()
{
    Mustafa();
    ll tt = 1;
    // cin >> tt;
    while(tt--)
    {   
        cin >> n;
        nums.resize(2, vector < ll > (n));
        for(auto & i : nums)
            for(auto & it : i)
                cin >> it;
        for(auto & i : memo)
            for(auto & it : i)
                it = -1;
        cout << max(max_hight(0, 0), max_hight(0, 1)) << "\n";
    }
    return 0;
}
