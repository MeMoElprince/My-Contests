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
        string s;       cin >> s;
        int n = s.size();
        ll cost1, cost2;
        cin >> cost1 >> cost2;
        string s1 = s, s2 = s;
        sort(s1.begin(), s1.end());
        sort(s2.rbegin(), s2.rend());
        ll ans;
        ll cnt1 = 0;
        ll cnt2 = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != s1[i])
            {
                if(s[i] == '0')
                    cnt1 += cost1;
                else
                    cnt1 += cost2;
            }
            if(s[i] != s2[i])
            {
                if(s[i] == '0')
                    cnt2 += cost1;
                else
                    cnt2 += cost2;
            }
        }
        ans = min(cnt1, cnt2);
        cout << ans << "\n";
    }
    return 0;
}
