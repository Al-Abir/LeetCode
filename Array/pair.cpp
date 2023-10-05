#include<bits/stdc++.h>
using namespace std;
int main(){

    int num []= {1,1,1,1};
    int size = sizeof(num)/sizeof(num[0]);
    int ans =0;
    for(int i =0; i<size-1; i++){
        for(int j = i + 1; j<=size; j++){
           if(num[i]==num[j]){
               ans++;
           }
        }
    }
    cout<<ans;


    return 0;
}