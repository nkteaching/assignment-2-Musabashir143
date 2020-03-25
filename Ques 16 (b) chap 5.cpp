#include <iostream> 
using namespace std; 
void palindrome(string x) 
{ 
    int static s=0;
	int static e = x.length()-1; 
   if(s==e){
   	cout<<"palindrome";
   }
    if (s<=e) {
        if (!(x[s] >='A'&& x[s] <='Z')) 
        {
		
		    s++;
			palindrome(x);	 
   		}
        
        else if (!(x[e]>= 'A' && x[e] <= 'Z')) 
        {
        	e--; 
            palindrome(x);
		}
        else if (x[s] == x[e])
		{
			
        	s++;
			e--; 
            palindrome(x);
		} 
        else
            cout<<"not palindrome";   
    }}
    
int main() 
{ 
    string str = "Mani  iNam"; 
    for (int i = 0; i < str.length(); i++) 
        str[i] = toupper(str[i]); 
    palindrome(str);  
} 
