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
    cin >> tt;
    while(tt--)
    {   
        ll n, d;
        cin >> n >> d;
        n++;
        ll past = 1, mkam = 1;
        for(int i = 1; i < d; i++)
        {
            past *= n++;
            if(i < d-1)
            {
                mkam *= i+1;
            }
        }
        cout << past / mkam << "\n";
    }
    return 0;
}
