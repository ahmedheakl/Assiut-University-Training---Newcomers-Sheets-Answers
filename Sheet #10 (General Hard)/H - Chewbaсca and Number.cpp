# include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define ar array
#define all(v)	 ((v).begin()), ((v).end())
#define rall(v) (((v).rbegin()), ((v).rend())
#define FOR(z) for(int i = 0; i < z; ++i)
#define vi vector<int>
#define vll vector<long long int>
#define f(x) double(x)
#define pb(x) push_back(x)
const int MAX_N = 5001, LVL=18;
ll t, n, q, x;
const int M = 998244353, MAX_CHAR=26;
 
 
 
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();++i){
        if(i==0&&s[i]=='9') cout << "9";
        else if(9<2*int(s[i]-'0')) cout << 9-(s[i]-'0');
        else cout << s[i];
    }
 
}