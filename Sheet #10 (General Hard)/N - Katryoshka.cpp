
#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define all(v)	 ((v).begin()), ((v).end())
#define rall(v) (((v).rbegin()), ((v).rend())
#define d(x) double(x)
#define pb(x) push_back(x)
#define sz(x) x.size()
#define fi first
#define se second
 
const int MAX_N=1e6+5, M=1e9+7;
 
ll n,m,k;
vector<ll> a;
 
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> m >> k;
    ll c1=min({n,m,k}), c2=min(max(0ll, (n-c1)/2), max(0ll,k-c1));
    cout << c1+c2;
 
 
}
 