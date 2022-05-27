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
const int MAX_N=51;
ll n, q;
 
bool get(vector<ll>& a, int x){
    int l=0, r=n-1;
    while(l<r){
        int m=l+(r-l)/2;
        if(a[m]==x) return true;
        else if(a[m]>x) r=m-1;
        else l=m+1;
    }
    if(a[l]==x||a[r]==x) return true;
    return false;
}
 
 
 
int main(){
    cin >> n >> q;
    vector<ll> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    sort(all(a));
    while(q--){
        int x; cin >> x;
        if(get(a, x)) cout << "found\n";
        else cout << "not found\n";
    }
 
}