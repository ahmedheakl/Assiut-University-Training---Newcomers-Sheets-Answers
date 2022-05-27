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
    cin >> n;
    for(int i=2;i<n;++i)if(n%i==0){
        cout << "NO"; return 0;
    }
    cout << "YES";
 
 
 
}