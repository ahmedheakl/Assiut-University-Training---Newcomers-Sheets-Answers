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
 
int n,m, t, x,y;
char b;
 
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s1,s2;
    cin >> s1 >> s2;
    if(sz(s1)<sz(s2)) swap(s1, s2);
    reverse(all(s1)), reverse(all(s2));
    int i=0;
    while(s1[i]==s2[i]&&i<sz(s2)) ++i;
    cout << sz(s1)+sz(s2)-2*i;
 
 
 
}
 