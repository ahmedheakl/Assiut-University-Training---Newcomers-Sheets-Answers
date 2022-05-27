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
int a[MAX_N]={};
ll n;
 
int gcd(int a, int b){
    return b?gcd(b, a%b): a;
}
 
 
int main(){
    int a,b; cin >> a >> b;
    if(a<b) swap(a,b);
    cout << gcd(a,b);
 
 
}