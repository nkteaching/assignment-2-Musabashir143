#include<iostream>
using namespace std;
void remove(char c,string s,int e,int size){
	if(e==size){
		cout<<-1;
	}
	else{
		
		if(s[e]== c){
			s[e]=NULL;
		}
		remove(c,s,e,size);
	}}
int main(){
	remove('a',"bnanaa",6,6);
}
