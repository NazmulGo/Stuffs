#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define vll vector<ll>
#define endl "\n" 
#define all(v) v.begin(), v.end()
const int N = 2e5+123;

void solve()
{
    ll n; cin >> n;
    vll v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    ll maxi = LLONG_MIN, sum = 0, l = 0, r = 0, j = 0;
    for(int i = 0; i < n; i++)
    {
        sum += v[i];
        if(sum > maxi)
        {
            maxi = sum;
            l = j;
            r = i;
        }
        if(sum < 0)
        {
            sum = 0;
            j = i + 1;+
        }
    }

    cout << maxi << endl;
    cout << l << " " << r << endl;

}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(NULL); 
    cout.tie(NULL);

    ll tc = 1; cin >> tc;
    while(tc--)
    {
        solve();
    }
}
