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
    int n;
    cin >> n;
    if(n==1) {cout << -1; return 0;}
    for(int i=1;i<=n;++i) if(i%2==0) cout << i << "\n";
 
}