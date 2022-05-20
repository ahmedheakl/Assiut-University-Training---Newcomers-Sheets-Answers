#include<bits/stdc++.h>
 
using namespace std;
 
vector<vector<int>> graph(3);
vector<pair<int, bool>> vis(3, {-1, false});
void dfs(int i, int p){
    vis[i].second = true;
    if(p > -1) vis[i].first = p;
    for(auto it: graph[i]){
        if(vis[it].second == false) dfs(it, i);
    }
    cout << char(i+int('A'));
}
 
int main(){
    string s;
    for(int i = 0; i < 3; ++i){
        cin >> s;
        if(s[1] == '>') graph[int(s[0]-'A')].push_back(int(s[2]-'A'));
        else graph[int(s[2]-'A')].push_back(int(s[0]-'A'));
    }
    if(graph[0].size() == 1 && graph[1].size() == 1 && graph[2].size() == 1){cout << "Impossible"; return 0;}
    for(int i = 0; i < 3; ++i){
        if(vis[i].second == false) dfs(i, -1);
    }
}