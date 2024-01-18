#include <iostream>
#include <string.h>
using namespace std;
int main ()
{
      // strcat, append,+ operetor, using loop.
      char a [50];
      char b [50];
      cin.getline(a, sizeof(a));
      cin.getline(b, sizeof(b));
      int len1 =  strlen(a);
      int len2 = strlen(b);

      for(int i =0; i<len2; i++){

         a[len1+i] = b[i];
      }
       a[len1+len2] = '\0';
       cout<<a;

}