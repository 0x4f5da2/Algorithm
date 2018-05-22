#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[1505];
   
    int a = 1;
    int b = 1;
    int c = 1;
    memset(arr, 0, sizeof(arr));
    arr[1] = 1;
    for(int i=2;i<1505;i++){
        arr[i] = min(min(arr[a] * 2, arr[b] * 3), arr[c] * 5);
        if(arr[i] == arr[a] * 2) a++;
        if(arr[i] == arr[b] * 3) b++;
        if(arr[i] == arr[c] * 5) c++;
    }
    cout<<arr[1500]<<endl;



    return 0;
}