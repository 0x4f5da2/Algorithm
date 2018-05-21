#include<bits/stdc++.h>
using namespace std;
// 是时候展现真正的技术了(手动斜眼)
// 蜜汁PE，不管了
int main(){
    int ans[3005];
    int vis[3005];
    int a, b;
    int op, ed;
    int aa, bb;
    while(cin>>a>>b){
        aa = a;
        bb = b;
        memset(vis, -1, sizeof(vis));
        memset(ans, 0, sizeof(ans));
        for(int i=0;i<3000;i++, a %= b, a *= 10){
            ans[i] = a / b;
            if(i != 0){
                if(vis[a/10] == -1){
                    vis[a/10] = i;
                } else {
                    op = vis[a/10];
                    ed = i;
                    break;
                }
            }
        }
        cout<<aa<<"/"<<bb<<" = "<<ans[0]<<".";
        for(int i = 1; i < ed && i < op + 50; i++){
            if(i == op) cout<<"(";
            cout<<ans[i];
        }
        if(ed - op > 50) cout<<"...";
        cout<<")"<<endl;
        cout<<"   "<<ed - op<<" = number of digits in repeating cycle"<<endl;
    }
    return 0;
}