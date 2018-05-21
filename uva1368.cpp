#include<bits/stdc++.h>
using namespace std;
int main(){
    int loop;
    cin>>loop;
    int dna[5][1005];
    char str[1005];
    const char atcg[] = {'A', 'C', 'G', 'T'};
    int n, l;
    while(loop--){
        memset(dna, 0, sizeof(dna));
        cin>>n>>l;
        while(n--){
            cin>>str;
            for(int i=0;i<l;i++){
                for(int g=0;g<4;g++){
                    if(str[i] == atcg[g]){
                        dna[g][i]++;
                    }
                }
            }
        }
        int result = 0;
        for(int i=0;i<l;i++){
            int hamming=99999;
            int res = -1;
            for(int todo=0;todo<4;todo++){
                int tmp = 0;
                for(int e=0;e<4;e++){
                    if(todo != e){
                        tmp+=dna[e][i];
                    }
                }
                if(tmp < hamming){
                    hamming = tmp;
                    res = todo;
                }
            }
            cout<<(char)atcg[res];
            result += hamming;
        }
        cout<<endl;
        cout<<result<<endl;
    }



    return 0;
}