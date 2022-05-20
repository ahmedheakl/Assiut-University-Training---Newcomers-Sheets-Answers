
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
 
char b;
 
bool check(int x){
    if(x==2) return true;
    if(x<2||x%2==0) return false;
    for(int i=3;i*i<=x;i+=2) if(x%i==0) return false;
    return true;
}
 
int exp(int a, int b){
    if(b==0) return 1;
    int t=exp(a, b/2);
    if(b&1) return (((t*t)%10)*a)%10;
    return (t*t)%10;
}
 
 
 
int main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n),b(n);
    for(int j=0;j<n;++j) cin >> a[j];
    for(int i=0;i<n;++i) cin >> b[i];
    for(int i=0;i<n;++i){
        if(b[i]==1){
            if(check(a[i])){
                int z=exp(15, x);
                cout << (a[i]*z)%10 << " ";
            }
            else cout << "-1 ";
        }else{
            int z=exp(10, x);
            cout << (a[i]*z)%10 << " ";
        }
    }
 
 
 
 
}