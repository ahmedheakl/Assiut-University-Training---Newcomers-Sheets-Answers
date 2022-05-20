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
 
double l, q, s2, s1;
vector<ll> a;
 
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> l >> s1 >> s2;
    cin >> t;
    if(s1>s2) swap(s1, s2);
    while(t--){
        cin >> q;
        double n=sqrt(2)*(l-sqrt(q));
        double d=s2-s1;
        double ans=n/d;
        cout << fixed << setprecision(6);
        cout << ans << endl;
 
    }
 
}
 