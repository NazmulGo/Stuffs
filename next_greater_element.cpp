#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

#define pb push_back
#define MOD 1000000007
#define vll vector<ll>
#define pll pair<ll, ll>
#define endl "\n" 
#define all(v) v.begin(), v.end()
#define mem(a,b) memset(a, b, sizeof(a))
#define co(n) cout << n << endl
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define fr(x, n) for (int i = x; i < n; ++i)
#define fraction(x) cout << fixed << setprecision(x)
#define Baba_Yaga ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
 
const double eps = 1e-9;
const int N = 2e5+123;

ll gcd(ll a,ll b) { return __gcd(a,b); }
ll lcm(ll a,ll b) { return (a*b)/__gcd(a,b); }

int dx[] = {0, 0, +1, -1, +1, +1, -1, -1};
int dy[] = {+1, -1, 0, 0, +1, -1, +1, -1};


void solve()
{
    ll n; cin >> n;
    vll v(n); fr(0, n) cin >> v[i];
    vll nge_left(n, -1), nge_right(n, -1);

    stack<ll> st;
    
    
    for(int i=0; i<n; i++)
    {
        while(!st.empty() && v[i] >= st.top())
        {
            st.pop();
        }
        if(!st.empty()) nge_left[i] = st.top();
        st.push(v[i]);
    }

    while(! st.empty()) st.pop();
    for(int i=n-1; i>=0; i--)
    {
        while(!st.empty() && v[i] >= st.top())
        {
            st.pop();
        }
        if(!st.empty()) nge_right[i] = st.top();
        st.push(v[i]);
    }

    fr(0, nge_left.size()) cout << nge_left[i] << " ";
    cout << endl;
    fr(0, nge_right.size()) cout << nge_right[i] << " ";


}

// --- Think the problem backwards ---

int main()
{
    Baba_Yaga;
    ll tc = 1; // cin >> tc;
    while(tc--) solve();
}
