#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stack>

using namespace std;

stack<char> stck;

int main(void){

    char str[100];

    while(1){

        gets(str);

        if(strcmp(str,".")==0) return 0;

        int i;

        for(i = 0; i<strlen(str); i++){

            if(str[i] == '(') {
                stck.push(str[i]);
            }

            else if(str[i] == '['){
                stck.push(str[i]);
                }

            else if(str[i] == ')'){
                if(!stck.empty() && stck.top()=='('){
                    stck.pop();
                }
                else {
                    stck.push(str[i]);
                }
            }
            else if(str[i] == ']'){
                if(!stck.empty() && stck.top()=='['){
                    stck.pop();
                }
                else {
                    stck.push(str[i]);
                }
            }
            else continue;
        }

        if(stck.empty()) printf("yes\n");
        else printf("no\n");

        while(!stck.empty()) stck.pop();

    }

}
