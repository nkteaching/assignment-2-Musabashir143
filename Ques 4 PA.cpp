#include<iostream>
#include<string.h>
using namespace std;
void reverse(string &a){
	string s=a.c_str();
	int size=a.size();
	size--;
		for(int i=0;i<a.size();i++){
			a[i]=s[size];
			size--;
		}
		
}
string addinglargernumbers(string num1, string num2) 
{ 
    if (num1.length() > num2.length()) 
        swap(num1, num2); 
    string str = ""; 
    int n1 = num1.length();
    int n2 = num2.length();
    reverse(num1); 
    reverse(num2); 
    int carry = 0; 
    for (int i=0; i<n1; i++) 
    { 
 	    int sum = ((num1[i]-'0')+(num2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
  
        carry = sum/10; 
    } 
  
    for(int i=n1; i<n2; i++){ 
        int sum = ((num2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
    if(carry) 
        str.push_back(carry+'0'); 
 		reverse(str); 
  
    return str; 
} 
int main() 
{ 
    string num1,num2;
    cout << "Enter First Number: ";
    cin >> num1;
    cout << "Enter Second Number: ";
    cin >> num2;
	cout << addinglargernumbers(num1,num2); 
    return 0; 
} 
