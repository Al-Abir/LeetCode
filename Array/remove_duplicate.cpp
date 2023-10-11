// Using Set function

#include<bits/stdc++.h>
using namespace std;
void duplicate(int arr[], int n){

     unordered_set<int> s;
     for(int i=0; i<n;i++){
        s.insert(arr[i]); //(N log N);
     }
    cout << "[ ";
    for (auto x : s) //O(n)
        cout << x << " ";
    cout << "]";
}



int main(){


   int arr[]={10,29,30,40,3,3,3,7,7,10};
   int size = sizeof(arr)/ sizeof(arr[0]);


   duplicate(arr,size);


    return 0;

}