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
        ll n, k;        cin >> n >> k;
        vector < int > nums(n);
        for(auto & i : nums)    cin >> i;
        ll test = (n % 2 ? n / 2 + 1 : n / 2);
        ll test2 = k / test;
        if(test2 % 2)
        for(int i = 0, j = n-1; i < test; i++, j--)
            swap(nums[i], nums[j]);
        for(int i = 0, j = n-1; i < test && i < k % test; i++, j--)
        {
            swap(nums[i], nums[j]);
        }
        for(auto & i : nums)        cout << i << " ";
        cout << "\n";

    }
    return 0;
}
