// Using priority queue to keep track the numbers that needed to + 1

#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,num,ans = 0;
    cin >> n;
    vector<long long> tmp(n);
    map<long long,vector<long long> > m;
    priority_queue<long long> pq;
    for(int i = 0 ; i < n ; i++){
        cin >> tmp[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> num;
        m[tmp[i]].push_back(num);
    }
    sort(tmp.begin(),tmp.end());
    tmp.erase(unique(tmp.begin(),tmp.end()),tmp.end());
    long long sum = 0;
    for(auto it : tmp){
        if(m[it].size() > 1 || !pq.empty()){
            for(int i = 0 ; i < m[it].size() ; i++){
                pq.push(m[it][i]);
                sum += m[it][i];      
            }
            sum -= pq.top();
            pq.pop();
            int pos = it;
            while(!pq.empty()){
                pos++;
                ans += sum;
                if(m[pos].size() != 0){
                    break;
                }
                else{
                    sum -= pq.top();
                    pq.pop();
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}
