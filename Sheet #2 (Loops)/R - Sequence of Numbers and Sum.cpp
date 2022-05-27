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
const int MAX_N=1e3+2;
ll n, m;
 
 
int main(){
 
    while(cin >> n >> m){
        if(n<=0||m<=0) break;
        if(n>m) swap(n,m);
        ll ans=0;
        for(int i=n;i<=m;++i){
            ans+=i;
            cout << i << " ";
        }
        cout << "sum =" << ans << endl;
    }
 
 
}