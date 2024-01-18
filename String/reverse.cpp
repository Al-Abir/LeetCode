#include<bits/stdc++.h>
using namespace std;
int main(){
     char s[10];
     gets(s);
     int i=0;

     int j = strlen(s)-1;
     while(i<j){
        char temp = s[i];
        s[i]=s[j];
        s[j]= temp;
        i++;
        j--;
     }

    cout<<s;
    return 0;

}