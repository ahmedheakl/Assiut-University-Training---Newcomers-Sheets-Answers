
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
    double a,b;
    cin >> a >> b;
    cout << "floor " << int(a) << " / " << int(b) << " = " << floor(a/b) << endl;
    cout << "ceil " << int(a) << " / " << int(b) << " = " << ceil(a/b) << endl;
    cout << "round " << int(a) << " / " << int(b) << " = " << round(a/b);
}
 