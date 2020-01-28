#include <bits/stdc++.h>
     
using namespace std;
int main{
        int t,n,x;
        cin >> t >> x;
        set<pair<int,int>> s;
        vector<int> v(x,0);
        for(int i = 0 ; i < x ; i++){
            s.insert({0,i});
        }
        while(t--){
            cin >> n;
            s.erase({v[n%x],n%x});
            v[n%x]++;
            s.insert({v[n%x],n%x});
            auto it = s.begin();
            cout << it->first * x + it->second << endl;
        }
        return 0;
    }
