#include <bits/stdc++.h>
using namespace std;

// shortcuts
#define ll long long
#define mx 1e18
#define mn -1e18
#define M 1000000007

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
void ok()
{
    ll n;
    cin >> n;
    vector<ll> vt(n);
    for(ll i = 0; i < n; i++) cin >> vt[i];

    set<ll> st;
    vector<ll> ans(n);
    for(ll i = 0; i < n; i++) st.insert(i);
    for(ll i = 0;i<n;i++)
    {
        ll mex = *st.begin();
        if(vt[i] == 0) {cout << -1 << endl; return;}
        else if(vt[i] < 0) ans[i] = mex-vt[i];
        else ans[i] = mex;
        st.erase(ans[i]);
    }
        
    for(ll i = 0; i < n; i++) cout << ans[i] << " ";
    cout << endl;
}

int main()
{

    // Shubham Kumar Jha
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("zinput.txt", "r", stdin);
    freopen("zoutput.txt", "w", stdout);
#endif

    ll t = 1;
    cin >> t;
    for (ll i = 1; i <= t; i++)
    {
        ok();
    }
    return 0;
}