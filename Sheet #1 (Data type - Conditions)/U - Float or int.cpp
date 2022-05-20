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
    double a; cin >> a;
    int b=a;
    if(float(b)-a==0.0) cout << "int " << b;
    else cout << "float " <<  b << " " << a-int(a);
}
 