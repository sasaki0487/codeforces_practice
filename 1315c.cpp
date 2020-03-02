#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> used(n * 2 + 1 , 1);
        vector<int> ans(n * 2);
        int tmp,flag = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> tmp;
            ans[i * 2] = tmp;
            used[tmp] = 0;
        }
        for(int i = 1 ; i < ans.size() ; i += 2){
            int pos = ans[i-1]+1;
            while(pos < used.size() && used[pos] == 0){
                pos++;
            }
            ans[i] = pos;
            if(ans[i] < ans[i-1] || pos == used.size()){
                flag = 1;
                break;
            }
            else{
                used[pos] = 0;
                pos++;
            }
        } 
        if(flag == 1){
            cout << "-1\n";
        }
        else{
            for(auto it : ans){
                cout << it << " ";
            }
            cout << endl;
        }
    }


    return 0;
}
