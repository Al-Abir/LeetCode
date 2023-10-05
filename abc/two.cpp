#include<bits/stdc++.h>
using namespace std;
int main(){


    int arr[]={3,2,4};
    int size =sizeof(arr)/sizeof(arr[0]);

    int target =6;

    for(int i=0;i<size; i++){
        for(int j =i+1; j<size; j++){
            if(arr[i]+arr[j]==target){
                cout<< i << j;
            }

        }

    }
    cout<<endl;

    return 0;
}
