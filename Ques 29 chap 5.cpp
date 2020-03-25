#include<iostream>
using namespace std;
int shor(int i){
	if(i==0){
            return i;
            }
	else
		{
            return shor(i-1);
	}
}
int main(){
	cout<<shor(4);
}
