#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int posx, posy;
    int m[8][8];
    char str[1000];
    bool e = false;
    int cnt = 1;
    bool first = true;
    while(true){
        bool illegal = false;
        for(int i=0;i<5;i++){
            cin.getline(str, 950);
            if(str[0] == 'Z' && i==0){
                e = true;
                break; 
            }
            for(int j=0;j<5;j++){
                m[i][j] = str[j];
                if(str[j] == ' '){
                    posx = i;
                    posy = j;
                }
            }
        }
        if(e){
            break;
        }
        bool done = false;
        while(true){
            cin.getline(str, 950);
            for(int i=0;i<strlen(str);i++){
                if(str[i]=='0'){
                    done = true;
                    break;
                } else if(illegal){

                }else if(str[i] == 'A'){
                    if(posx > 0){
                        m[posx][posy] = m[posx-1][posy];
                        posx-=1;
                    } else {
                        illegal = true;
                    }
                } else if(str[i] == 'B') {
                    if(posx < 4){
                        m[posx][posy] = m[posx + 1][posy];
                        posx+=1;
                    } else {
                        illegal = true;
                    }
                } else if(str[i]=='L') {
                    if(posy > 0){
                        m[posx][posy] = m[posx][posy-1];
                        posy-=1;
                    } else {
                        illegal = true;
                    }
                } else if(str[i]=='R'){
                    if(posy < 4){
                        m[posx][posy] = m[posx][posy+1];
                        posy += 1;
                    } else {
                        illegal = true;
                    }

                }

            }
            if(done) break;
        }
        if(first) {
            first = false;
        } else {
            cout<<endl;
        }
        cout<<"Puzzle #"<<cnt++<<":"<<endl;
        if(!illegal){
            for(int i=0;i<5;i++){
                for(int j=0;j<5;j++){
                    if(j!=0) cout<< " ";
                    if(i==posx && j == posy){
                        cout<<" ";
                    } else {
                        cout<<(char)m[i][j];
                    }
                }
                cout<<endl;
            }
        } else {
            cout<<"This puzzle has no final configuration."<<endl;
        }
        
        
    }

    return 0;
}