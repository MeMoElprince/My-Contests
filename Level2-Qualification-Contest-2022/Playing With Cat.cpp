/**
 * @author Mustafa Elsharawy
 * @date 2020-08-23
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);

ll k;
bool good(ll mid)
{
    ll cur = (1 * (mid-1) * mid / 2) + (3 * ((mid-1) * mid / 2)) + (5 * (mid-1) * mid/2);
    
    if(k < cur)
        return 0;

    if(mid + cur >= k)
        return 1;
    cur += mid;
    ll test = k - cur;
    
    if(mid * 3 < test)
        cur += mid * 3;
    else
    {
        if(test % 3 == 0)
            return 1;
        else
            return 0;
    }
    test = k - cur;

    if(mid * 5 < test)
        cur += mid * 5;
    else
    {
        if(test % 5 == 0)
            return 1;
        else
            return 0;
    }
    
    if(cur == k)
        return 1;
    return 0;
}
bool catched()
{
    ll l = 1, r = 1e9;
    while(l <= r)
    {
        ll mid = l + (r - l) / 2;
        if(good(mid))
        {
            return 1;
        }
        else if(mid*(mid+1)/2 + (mid*(mid+1)/2) * 3 + (mid*(mid+1)/2) * 5 > k)
        {
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return 0;
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); 
    #endif
    fast
    int tt = 1;
    cin >> tt;
    while(tt--)
    {
        cin >> k;
        cout << (catched() ? "YES\n" : "NO\n");
    }
    return 0;
}
