/*  Store the occurance of each character in their own array
 *  Perform O(log n) search of each error for every character using
 *  upper_bound
 *  Add up the search results
 */


#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,m,n,tmp;
    string str;
    cin >> t;
    while(t--){
        cin >> m >> n;
        vector<int> v(n);
        cin >> str;
        vector<vector<int> > tab(26,vector<int>());
        vector<int> ans(26,0);
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            v[i] = tmp-1;
        }
        for(int i = 0 ; i < m ; i++){
            tab[str[i]-'a'].push_back(i);
        }
        for(int j = 0 ; j < n ; j++ ){
            for(int i = 0 ; i < 26 ; i++){
                if(tab[i].empty()) continue;
                if(tab[i].back() <= v[j]){
                    ans[i] += (int)tab[i].size();
                }
                else{
                    auto itf = upper_bound(tab[i].begin(),tab[i].end(),v[j]);
                    if(itf != tab[i].end()){
                        ans[i] += itf - tab[i].begin();
                    }
                }
            }
        }
        for(int i = 0 ; i < 26 ; i++){
            if(tab[i].empty()){
                cout << ans[i];
            }
            else
                cout << ans[i]+tab[i].size();
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
