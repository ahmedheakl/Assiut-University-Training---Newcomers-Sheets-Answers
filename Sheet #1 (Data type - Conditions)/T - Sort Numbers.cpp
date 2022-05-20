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
    int a[3];
    int b[3];
    for(int i=0;i<3;++i) cin >> a[i], b[i]=a[i];
    sort(a, a+3);
    for(auto e: a) cout << e << "\n";
    cout << "\n";
    for(auto e: b) cout << e << "\n";
}
 