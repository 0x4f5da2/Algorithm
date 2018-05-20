#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
    int loop;
    char s[100];
    cin>>loop;
    while(loop--){
        cin>>s;
        double prev=0;
        double result = 0;
        int mul = 0;
        bool used = false;
        for(int i=0;i<strlen(s);i++){
            if(s[i] >= 'A' && s[i] <= 'Z' ){
                if(!used){
                    if(mul == 0){
                        result += prev;
                    } else {
                        result += prev * mul;
                    }
                }
                if(s[i]=='C'){
                    prev = 12.01;
                } else if (s[i] == 'H'){
                    prev = 1.008;
                } else if (s[i] == 'O'){
                    prev = 16.00;
                } else{
                    prev = 14.01;
                }
                mul = 0;
                used = false;
            } else {
                mul = mul * 10 + (s[i] - '0');
            }
        }
        
        if(!used) {
            if(mul==0){
                result += prev;
            } else {
                result += prev * mul;
            }
        }
        printf("%.3f\n", result);

    }


    return 0;
}