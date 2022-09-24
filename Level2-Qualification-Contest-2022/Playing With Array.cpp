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
        int n, k;       cin >> n >> k;
        vector < int > nums(n);
        for(auto & i : nums)        cin >> i;
        multiset < int > s;
        for(int i = 0; i < n; i++)
        {
            s.insert(nums[i]);
            int a = *s.rbegin();
            if(s.size() == k)
            {
                s.erase(a);
            }
        }
        if(s.empty())
            cout << -1 << "\n";
        else
            cout << *s.rbegin() << "\n";
    }
    return 0;
}
