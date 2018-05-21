#include<bits/stdc++.h>
using namespace std;
// 蜜汁PE，不管了
int main(){
    int n, m;
    char _m[15][15];
    char tmp[15];
    int num[15][15];
    int vis[15][15];
    for(int cse=1;cin>>n;cse++){
        if(n==0){
            break;
        }
        cin>>m;
        memset(num, 0, sizeof(num));
        memset(vis, 0, sizeof(vis));
        int cnt = 1;
        for(int i=0;i<n;i++){
            cin>>tmp;
            for(int j=0;j<m;j++){
                _m[i][j] = tmp[j];
                if(_m[i][j]=='*'){
                    num[i][j] = -1;
                }
                if((i - 1 < 0 || j - 1 < 0 || _m[i-1][j] == '*' || _m[i][j-1] == '*') && _m[i][j] != '*'){
                    num[i][j]=cnt++;
                }
            }
        }
        if(cse != 1) cout<<endl;
        cout<<"puzzle #"<<cse<<":"<<endl;
        cout<<"Across"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(num[i][j] > 0 && vis[i][j] == 0){
                    if(num[i][j] > 10){
                        cout<<" ";
                    } else {
                        cout<<"  ";
                    }
                    cout<<num[i][j]<<".";
                    for(int tj = j; tj < m && _m[i][tj] != '*'; tj++){
                        cout<<(char)_m[i][tj];
                        vis[i][tj] = 1;
                    }
                    cout<<endl;
                }
            }
        }
        memset(vis, 0, sizeof(vis));
        cout<<"Down"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(num[i][j] > 0 && vis[i][j] == 0){
                    if(num[i][j] > 10){
                        cout<<" ";
                    } else {
                        cout<<"  ";
                    }
                    cout<<num[i][j]<<".";
                    for(int ti = i; ti < n && _m[ti][j] != '*'; ti++){
                        cout<<(char)_m[ti][j];
                        vis[ti][j] = 1;
                    }
                    cout<<endl;
                }
            }
        }

    }




    return 0;
}