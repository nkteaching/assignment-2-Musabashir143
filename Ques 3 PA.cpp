#include<iostream>
using namespace std;
bool delimiterMatching(char* file);
int main(){
    char fileName[50];
    cout << "Enter a statement:";
    cin >> fileName;
    if(delimiterMatching(fileName))
    cout<<"Your statement constructed.";
    else
    {cout<< "\nYour statement is incorrectly constructed." << endl;
}}
bool delimiterMatching(char* file){
    stack<char> var;
    int counter = 0;
    char ch, temp, popd;
    do{
        ch = file[counter];
        if(ch == '(' || ch == '[' || ch == '{')
            var.push(ch);
        else if(ch == '/'){
            temp = file[counter+1];
            if(temp == '*')
                var.push(ch);
            else{
                ch = temp;
                continue;
            }
        }
        else if(ch == ')' || ch == ']' || ch == '}'){
            pop1 = var.top();
            var.pop();
            
            if(ch != pop1)
                return false;
            }
        else if(ch == '*'){
            temp = file[counter+1];
            pop1 = var.top();
            var.pop();
            if(temp == '/' && pop1 != '/')
                return false;
            else{
                ch = temp;
                var.push(pop1);
                continue;
            }
        }
        counter++;
    }while(ch != '\n');
    if(var.empty())
        
        return true;
    else 
    {
        return false;
}}
