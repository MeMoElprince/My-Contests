/**
 * @author Mustafa Elsharawy
 * @date 2020-08-23
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define fast ios::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define multiOrderedSet tree <int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>



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
        vector < int > nums(n), ans(n);
        for(auto & i : nums)            cin >> i;
        multiOrderedSet oms;
        
        for(int i = n-1; i >= 0; i--)
        {
            int a = nums[i];
            oms.insert(a);
            int size = oms.size();
            ans[i] = size - oms.order_of_key(a + 1);
        }
        
        for(auto & i : ans)     cout << i << " ";
        cout << "\n";
    }
    return 0;
}
