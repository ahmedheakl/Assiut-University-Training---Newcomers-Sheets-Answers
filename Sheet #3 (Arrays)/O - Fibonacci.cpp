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
const int MAX_N=51;
ll n, dp[MAX_N]={};
ll fib(int n){
    if(n<3||dp[n]) return dp[n];
    return dp[n]=fib(n-1)+fib(n-2);
}
 
 
int main(){
    cin >> n;
    dp[1]=0, dp[2]=1;
    cout << fib(n);
 
 
 
 
 
 
}