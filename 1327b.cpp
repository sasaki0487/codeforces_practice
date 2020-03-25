// Record married prince and princess by traversing through princess' lists
// Find a not married princess then find a prince that's not in her list
// Output the answer if found.
#include <bits/stdc++.h>

typedef long long ll;
using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int s;
        vector<vector<int> > p_list;
        vector<int> p_tar(n,0),m_ed(n,0);
        for(int k = 0 ; k < n ; k++){
            cin >> s;
            vector<int> tmp(s);
            for(int i = 0 ; i < s ; i++){
                cin >> tmp[i];
                tmp[i]--;
                if(m_ed[k] == 0 && p_tar[tmp[i]] == 0){
                    p_tar[tmp[i]] = 1;
                    m_ed[k] = 1;
                }
            }
            p_list.push_back(tmp);
        }
        int f = 0;
        for(int i = 0 ; i < n && f == 0; i++){
            if(m_ed[i] == 0){
                for(int j = 0 ; j < n ; j++){
                    if(p_tar[j] == 0 && find(p_list[i].begin(),p_list[i].end(),j) == p_list[i].end()){
                        cout << "IMPROVE\n" << i+1 << " " << j+1 << endl;
                        f = 1;
                        break;
                    }
                }
            }
        }
        if(f == 0){
            cout << "OPTIMAL\n";
        }
    }
    return 0;
}
