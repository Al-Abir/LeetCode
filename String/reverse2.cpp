#include<bits/stdc++.h>
using namespace std;
string reverse_string(string str){
    
    string temp = str;
    int index =0;
    for(int i = temp.length()-1; i>=0; i--){
         
         str[index]= temp[i];
         index++;
    }
    return str;
}
int main(){
    
    cout << "Original string: w3resource"; 
	cout << "\nReverse string: " << reverse_string("w3resource");
	cout << "\n\nOriginal string: Python"; 
	cout << "\nReverse string: " << reverse_string("Python");
    
    // reverse(s.begin(),s.end());
    // cout<<s<<endl;
    
    
    return 0;
}