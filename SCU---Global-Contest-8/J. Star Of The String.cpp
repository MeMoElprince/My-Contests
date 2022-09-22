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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}
string s;       
ll n;
int main()
{
    Mustafa();
    ll tt = 1;
    // cin >> tt;
    while(tt--)
    {   
        cin >> s;
        n = s.size();
        int mn = INT_MAX;
        for(char x = 'a'; x <= 'z'; x++)
        {
            int mx = 1;
            int cnt = 1;
            for(auto & i : s)
            {
                mx = max(cnt, mx);
                if(i == x)
                {
                    cnt = 1;
                }
                else
                    cnt++;
                mx = max(cnt, mx);
            }
            mn = min(mn, mx);
        }
        cout << mn << "\n";
    }
    return 0;
}
