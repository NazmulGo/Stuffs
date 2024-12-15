ll bin_expo_iter(ll a, ll b)
{
    ll ans = 1;
    while(b)
    {
        if(b & 1) ans = (ans * a) % MOD;
        a = (a * a) % MOD;
        b >>= 1;
    }
    return ans;
}

ll bin_expo_recur(ll a, ll b)
{
    if(b == 0) return 1;
    ll val = bin_expo_recur(a, b/2);
    if(b & 1) return (a * (val * val) % MOD) % MOD;
    else return (val * val) % MOD;
}
