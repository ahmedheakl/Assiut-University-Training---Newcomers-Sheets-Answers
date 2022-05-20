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
 
char b;
 
 
int main(){
    int n, x;
    cin >> n;
    vector<tuple<ll, ll, ll>> a(n);
    for(int i=0;i<n;++i){
        ll w,z;
        cin >> w >> z;
        a.push_back({w-z, w, z});
    }
    sort(all(a), greater<tuple<ll, ll, ll>>());
    ll cnt=0, rem=0;
    for(auto e: a){
        ll a1, a2, a3;
        tie(a3, a1, a2)=e;
        cnt+=max(0ll, a1-rem);
        rem=a3+max(0ll, rem-a1);
    }
    cout << cnt;
 
 
 
 
}