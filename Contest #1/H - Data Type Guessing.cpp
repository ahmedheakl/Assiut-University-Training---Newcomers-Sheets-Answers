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
 
 
 
 
const ll mod = 1e9+7;
int main(){
    ll n,k,a;
    cin >> n >> k >> a;
    ll t=n*k;
    if(t%a) cout << "double";
    else if(t/a<=(ll)2147483647&&t/a>=-2147483648) cout << "int";
    else cout << "long long";
}
 