#include <iostream> 
#include<stdlib.h>
#include<string.h>
using namespace std; 
static int s=0;
void palindrome(string x)
{
   static int e = x.length()-1;
   if(s==e){ 	
   	cout<<"Palindrone";
   }
    if (s <= e) {
        if (x[s] == x[e])
		{
        	s++;
			e--; 
            palindrome(x);
		} 
        else
            cout<<"not palindrome";   
    }   
} 
int main() 
{ 
    string str = "HoloH";
    palindrome(str); 

} 
