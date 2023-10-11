#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
     int removelemnt(vector<int> &arr, int check){
  
       int index = 0;
       for(int i =0;i<arr.size();i++){
           if(arr[i] !=check){
              arr[index]=arr[i];
             
              index++;
           }

       }
       
       return index;
      
     }

};
int main(){

     vector<int> arr = {10,10,20,20,20,10,15,34};
     int val = 10; // 20,20,20,15,34  index 5;
     Solution solution;
     int output = solution.removelemnt(arr,val);
     for(int j=0; j<output;j++){
        cout<<arr[j]<<" ";
     }cout<<endl;
     cout<<output;
    return 0;
}
