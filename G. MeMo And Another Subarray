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
ll n, x;       
vector < ll > nums;
vector < vector < ll > > memo;
ll cnt = 0;
ll sol(int idx, int stage)
{
    if(idx == n || stage == 4)  return 0;
    if(memo[idx][stage] != -1)
        return memo[idx][stage];
    ll ans1;
    if(stage == 0)  ans1 = sol(idx+1, stage);
    if(stage == 1)  ans1 = nums[idx] + sol(idx+1, stage);
    if(stage == 2)  ans1 = nums[idx] * x + sol(idx+1, stage);
    if(stage == 3)  ans1 = nums[idx] + sol(idx+1, stage);
    ll ans2;
    ans2 = sol(idx, stage+1);
    return memo[idx][stage] = max(ans1, ans2);  
}
bool ans = 0;
int left_all = -1;
int right_all = -1;
int left_sub = -1;
int right_sub = -1;
bool all = 1;
bool sub = 1;
void Build(int idx, int stage)
{
    if(idx == n || stage == 4)  return;
    ll ans1;
    if(stage == 0)  ans1 = sol(idx+1, stage);
    if(stage == 1)  ans1 = nums[idx] + sol(idx+1, stage);
    if(stage == 2)  ans1 = nums[idx] * x + sol(idx+1, stage);
    if(stage == 3)  ans1 = nums[idx] + sol(idx+1, stage);
    ll ans2;
    ans2 = sol(idx, stage+1);
    ll optimal = sol(idx, stage);
    if(optimal == ans1)
    {
        if(stage != 0)
        {
            ans = 1;
            if(all)
            {
                left_all = idx+1;
                all = 0;
            }
            if(stage == 2)
            {
                if(sub)
                {
                    left_sub = idx+1;
                    sub = 0;
                }
                right_sub = idx+1;
                cnt++;
            }
            right_all = idx+1;
        }
        Build(idx+1, stage);
        return;
    }
    else
    {
        Build(idx, stage+1);
        return;
    }
    return;  
}
int main()
{
    Mustafa();
    ll tt = 1;
    // cin >> tt;
    while(tt--)
    {   
        cin >> n >> x;
        nums.assign(n, 0);
        memo.assign(n+10, vector < ll > (5, -1));
        for(auto & i : nums)    cin >> i;
        cnt = 0;
        Build(0, 0);
        cout << sol(0, 0) << " " << cnt << "\n";
        cout << left_all << " " << right_all << "\n";
        cout << left_sub << " " << right_sub << "\n";
    }
    return 0;
}
