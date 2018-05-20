#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int loop;
    cin>>loop;
    while(loop--){
        char str[105];
        cin>>str;
        int len = strlen(str);
        int result = len;
        for(int i=1;i<=len;i++){
            if(len % i == 0){
                bool flag = true;
                for(int j=0;j<len;j++){
                    if(str[j] != str[j % i]) flag = false;
                }
                if(flag){
                    result = i;
                    break;
                }
            }
        }
        cout<<result<<endl;
        if(loop)    cout<<endl;
    }





    return 0;
}