#include <bits/stdc++.h>
#define ll long long
#define lp(start, stop) for(int i = start; i < stop; i++)
#define lpi(i, stop) for(int i = 0; i < stop; i++)
#define lpn(n) for (int i = 0; i < n; i++)
#define vll(n, v) vector<ll>v(n, 0)
#define inpv(vec) for (int i = 0; i < vec.size(); i++) cin>>vec[i];
#define sortv(vec) sort(vec.begin(), vec.end());
#define sorta(arr, n) sort(arr, arr + n);
#define nl "\n";
#define DBG(vari) cerr<<#vari<<" = "<<(vari)<<"\n"; 
#define rno {cout<<"NO\n"; return;}
#define rys {cout<<"YES\n"; return; }
#define me(map, val) map.find(val) != map.end()
#define mne(map, val) map.find(val) == map.end()
#define pll pair<ll, ll>
#define pii pair<int, int>
#define loop(i, start, stop) for(int i = start; i < stop; i++)
#define usaco(in, out) freopen(in, "r", stdin);freopen(out, "w", stdout);
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second

const int mod1 = 1e9 + 7;

using namespace std;

string getstri();
string getstr();
ll gcd(ll, ll);
void pv(vector<ll>);
void pmat(vector<vector<int>> m);

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    inpv(a);

    ll c = 0, ab = 0;
    for (int i = 0; i < n; i++) {
        
    }
        c = abs(c + a[i]);

    cout<<c<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);   

    int t;
    cin >> t;
    while (t--) 
    solve();
}

string getstri() {
    cin.ignore();
    return getstr();
}

string getstr() {
    string inp;
    getline(cin, inp);
    return inp;
}

ll gcd(ll a, ll b) {
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void pv(vector<ll> vec) {
    lpn(vec.size()) 
        cout<<vec[i]<<" ";
    cout<<nl;
}

void pmat(vector<vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[0].size(); j++)
            cout<<v[i][j]<<" ";
        cout<<nl;
    }
}