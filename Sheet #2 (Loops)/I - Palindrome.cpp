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
ll n;
int main(){
    string s,x; cin >> s;
    x=s;
    reverse(all(x));
    cout << stoi(x) << endl;
    if(x==s) cout << "YES";
    else cout << "NO";
 
 
 
}