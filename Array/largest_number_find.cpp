#include<bits/stdc++.h>
using namespace std;
int display(vector<int> &arr){
    int largest = arr[0];
    for(int i =0; i<arr.size();i++){
        if(arr[i]>largest);
        largest = arr[i];
    }
   return largest;
}
int main(){

    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<display(arr);


    return 0;
}