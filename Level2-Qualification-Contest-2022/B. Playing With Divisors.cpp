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
    cin >> tt;
    while(tt--)
    {
        ll n;       cin >> n;
        cout << (((ll)sqrt(n) * (ll)sqrt(n)) == n ? "YES\n" : "NO\n");
    }
    return 0;
}
