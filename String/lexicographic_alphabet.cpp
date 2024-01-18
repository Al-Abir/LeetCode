#include<bits/stdc++.h>
using namespace std;
string letter_shipt(string s ,int len){

    for(int i=0; i<len; i++){
        int assci = (int)(s[i]);
        if(assci== 90){
            s[i]==char(65);
        }else if(assci == 122){
            s[i]=char(97);
        }
        else if((assci>=65 && assci<90) || (assci>=97 && assci<122)){
            s[i]= char(assci+1);
        }

    } 
    return s; 

}
int main(){
    
    string s = "abcds";
    int len = s.length();

    cout<<letter_shipt(s, len);
     

    return 0;

}