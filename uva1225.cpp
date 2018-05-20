#include<iostream>
#include<cstring>
using namespace std;
int main() {
    int loop;
    int n;
    cin>>loop;
    while(loop--){
        cin>>n;
        int arr[15];
        memset(arr, 0, sizeof(arr));
        for(int i=1;i<=n;i++){
            int tmp = i;
            while(tmp!=0){
                arr[tmp % 10]++;
                tmp /= 10;
            }
        }
        for(int i=0;i<10;i++){
            if(i!=0) cout<<" ";
            cout<<arr[i];
        }
        cout<<endl;
    }


    return 0;
}