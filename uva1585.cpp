#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[100];
    int loop;
    cin>>loop;
    while(loop--){
        cin>>s;
        int len = strlen(s);
        int score=0;
        int cur=0;
        for(int i=0;i<len;i++){
            if(s[i]=='O'){
                score+=(++cur);
            } else {
                cur=0;
            }
        }
        cout<<score<<endl;
    }
    return 0;
}