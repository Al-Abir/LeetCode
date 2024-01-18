#include<bits/stdc++.h>
using namespace std;
string captilize(string str){
   for(int i = 0 ; i<str.length(); i++){

        if(i==0){
            str[i]= toupper(str[i]);

        }else if(str[i-1] == ' '){
            str[i]=toupper(str[i]);
        }

   }
   return str;

}
int main(){
     string s = "i am fine hou are you ";
     cout<<captilize(s)<<endl;

    return 0;

}