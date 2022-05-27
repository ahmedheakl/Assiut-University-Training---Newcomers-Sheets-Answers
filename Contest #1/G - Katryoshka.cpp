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
    ll a,b,c;
    cin >> a >> b >> c;
    if(b<=a&&b<=c) cout << b+min((a-b)/2,c-b);
    else if(a<=b&&a<=c) cout << a;
    else cout << c;
}