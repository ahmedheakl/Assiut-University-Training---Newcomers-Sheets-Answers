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
ll n;
int main(){
    int b;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;++i) cin >> a[i];
    auto it=min_element(all(a));
    cout << *it << " " << distance(a.begin(), it)+1;
 
 
 
}
 