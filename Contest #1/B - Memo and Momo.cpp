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
    ll a,b,k;
    cin >> a >> b >> k;
    if(a%k==0&&b%k==0) cout << "Both";
    else if(a%k==0) cout << "Memo";
    else if(b%k==0) cout << "Momo";
    else cout << "No One";
}