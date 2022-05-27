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
 
ll a,b,c,d;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a >> b >> c >> d;
    ll s=a;
    bool ok=false;
 
    ll a1=a+b-c, a2=a+b*c;
    ll a3=a-b+c, a4=a-b*c;
    ll a5=a*b+c, a6=a*b-c;
    vector<ll> ans={a1,a2,a3,a4,a5,a6};
    for(auto e: ans) ok|=(e==d);
    if(ok) cout << "YES";
    else cout << "NO";
 
 
 
 
 
 
}