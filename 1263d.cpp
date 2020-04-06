// Union find with dfs
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

const int max_size = 2e5+69;

vector<int> v[max_size];
int visit[max_size] = {0};

void dfs(int i){
    visit[i] = 1;
    for(auto it: v[i]){
        if(visit[it] == 0){
            dfs(it);
        }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    int n;
    string s;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> s;
        for(char c:s){
            v[i].push_back(n + c - 'a');
            v[n + c - 'a'].push_back(i);
        }
    }
    int ans = 0;
    for(int i = n ; i < n + 26 ; i++){
        if(!v[i].empty() && visit[i] == 0){
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
