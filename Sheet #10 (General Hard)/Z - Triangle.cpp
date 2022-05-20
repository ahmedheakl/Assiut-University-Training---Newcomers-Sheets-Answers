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
 
 
const int MAX_N=4e3+5, M=1e9+7;
 
bool solve(int x,int y,int x2,int y2,int x3,int y3){
    ll d1=(x-x2)*(x-x2)+(y-y2)*(y-y2);
    ll d2=(x-x3)*(x-x3)+(y-y3)*(y-y3);
    ll d3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
    if(d1==0||d2==0||d3==0) return false;
    vector<ll> vals={d1,d2,d3}; sort(all(vals));
    return ((vals[0]+vals[1])==vals[2]);
}
 
int x,y,x2,y2,x3,y3;
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> x >> y >> x2 >> y2 >> x3 >> y3;
    if(solve(x,y,x2,y2,x3,y3)) cout << "RIGHT";
     else{
        bool ok=false;
        vector<int> coord={x,y,x2,y2,x3,y3};
        for(int i=0;i<12;++i){
            int p=i/2;
            if(i%2==0) ++coord[p];
            else --coord[p];
            ok|=solve(coord[0],coord[1],coord[2],coord[3],coord[4],coord[5]);
            if(i%2==0) --coord[p];
            else ++coord[p];
        }
        if(ok)cout << "ALMOST";
        else cout <<"NEITHER";
 
 
     }
}