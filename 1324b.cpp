#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int t,n,tmp;
    cin >> t;
    while(t--){
        unordered_map<int,int> m;
        int f = 0;
        cin >> n;
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            if(m[tmp] == 0){
                m[tmp] = i+1;
            }
            else if(f == 0 && m[tmp] != i){
                f = 1;
            }
        }
        if(f){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}

