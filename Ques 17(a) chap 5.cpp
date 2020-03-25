#include<iostream>
using namespace std;
void search(char c ,string s,int e ,int size){
 	if(e==size){
 		cout<<"not found";
	 }
	 else{
	 	if(s[e]==c){		
	 		cout<<"found";
		 }
	 search(c,s,e+1,size);
	 }
 }
main(){
	search('c',"Hello",1,6);
}
