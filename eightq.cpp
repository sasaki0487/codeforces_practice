#include <bits/stdc++.h>

using namespace std;

int n;
bool check(vector<int> &qp,int x,int y){
    vector<vector<int> > bd (n,vector<int>(n,0));
    for(int i = 0 ; i < x ; i++){
        bd[i][qp[i]] = 1;
    }
    for(auto it:bd){
        for(auto it2:it){
        }
    }
    int i,j;
    i = x;
    while(i >= 0){
        if(bd[i][y] != 0){
            return false;
        }
        i--;
    }
    i = x;
    j = y;
    while(i < n && j >= 0){
        if(bd[j][i] != 0){
            return false;
        }
        i++;
        j--;
    }
    i = y;
    j = x;
    while(j >= 0 && i >= 0){
        if(bd[j][i] != 0){
            return false;
        }
        i--;
        j--;
    }
    return true;
}

void ptb(vector<int> & qp){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(qp[i] == j){
                cout << "O";
            }
            else{
                cout << "X";
            }
        }
        cout << endl;
    }
    cout << endl;
}


int main(){
    cout << "Enter board size: ";
    cin >> n;
    vector<int> qp(n,-1);
    int i , j;
    for(i = 0 ; ; i++){
        qp[i]++;
        for(j = qp[i] ;; j++){
            if(j == n){
                qp[i] = -1;
                i-=2;
                break;
            }
            if(check(qp,i,j) == true){
                qp[i] = j;
                break;
            }
        }
        if(i == n - 1){
            break;
        }
    }
    ptb(qp);
    return 0;
}
