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
    string a,c;
    char b;
    cin >> a >> b >> c;
    if(b=='='){
        if(stoi(a)==stoi(c)) cout << "Right";
        else cout << "Wrong";
    }else if(b=='>'){
        if(stoi(a)>stoi(c)) cout << "Right";
        else cout << "Wrong";
    }else{
        if(stoi(a)<stoi(c)) cout << "Right";
        else cout << "Wrong";
    }
}
 