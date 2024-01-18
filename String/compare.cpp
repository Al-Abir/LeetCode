#include<bits/stdc++.h>
using namespace std;
int main(){

  //using strcmp
    /*char a[50];
     gets(a);
      char b[50];
     gets(b);
    if(strcmp(a,b)==0){
        cout<<"equal";

    }else{
        cout<<"not equal";
    }*/ 
   //without function
   char a[50], b[50];
   gets(a);
   gets(b);
   int check =0;
   int i =0;
    while(a[i] != '\0' || b[i] !='\0'){
        if(a[i]!=b[i]){
            check =1;
            break;
        }    
        i++;


    }
    if(check==0){
        cout<<"equal";
    }else{
        cout<<"not equal";
    }
     
  return 0;
}