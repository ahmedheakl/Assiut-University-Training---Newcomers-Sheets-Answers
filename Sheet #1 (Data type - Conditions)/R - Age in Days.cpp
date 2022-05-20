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
    int n; cin >> n;
    int y=n/365, m=(n-y*365)/30, d=n-y*365-m*30;
    cout << y << " years\n" << m  << " months\n" << d << " days";
}
 
 