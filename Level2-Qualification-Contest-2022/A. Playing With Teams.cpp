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
        int n;      cin >> n;
        vector < int > a(n), b(n);
        int memo = 0, nasr = 0;
        for(int i = 0; i < n/2; i++)
            cin >> a[i];
        for(int i = 0; i < n/2; i++)
            cin >> b[i];
        for(int i = 0; i < n/2; i++)
            if(a[i] > b[i])
                memo++;
            else if(a[i] < b[i])
                nasr++;
        if(memo == nasr)
        {
            cout << -1 << "\n";
            continue;
        }
        cout << (memo > nasr ? "MeMo\n" : "Nasr\n");
    }
    return 0;
}
