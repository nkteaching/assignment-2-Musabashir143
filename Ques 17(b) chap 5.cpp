#include<iostream>
using namespace std;
void count(char c,string s,int e,int size){	
 int count1;
	if(e==size)
	{
		cout<<count1;
	}
	else{
		if(s[e]==c){	
			count1++;		
		}
		count(c,s,e,size);
	}
}
main(){
	count('a',"aaaa",6,6);
}
