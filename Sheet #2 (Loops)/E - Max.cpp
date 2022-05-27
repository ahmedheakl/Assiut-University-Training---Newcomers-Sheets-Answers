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
    int n; cin >> n;
    int ans=-1;
    for(int i=0;i<n;++i) {
        int a; cin >> a;
        ans=max(ans,a);
    }
    cout << ans;
 
}
 
 