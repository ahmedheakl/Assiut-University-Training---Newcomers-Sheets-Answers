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
ll n, m, k, s;
 
 
 
int main(){
    cin >> k >> s;
    int ans=0;
    for(int x=0;x<=k;++x){
        for(int y=0;y<=k;++y){
            if((s-x-y)<=k&&x+y<=s) ++ans;
        }
    }
    cout << ans;
 
}
 