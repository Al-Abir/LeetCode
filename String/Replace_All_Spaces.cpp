#include<bits/stdc++.h>
using namespace std;
int main(){

    char a [50];
    gets(a);

    //int len = strlen(a);

    for(int i =0 ; i<len; i++){

           if(a[i]==' '){
            a[i]= '%';
           }

    }
    cout<<a;



    return 0;

}