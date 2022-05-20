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
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(r1<l2||r2<l1) cout << -1;
    else cout << max(l1, l2) << " " << min(r1, r2);
}
 