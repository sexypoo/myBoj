#include <iostream>
#include<stdio.h>
#include<string.h>
#include<stack>

using namespace std;

#define OPEN '('
#define CLOSE ')'

stack<char> stck;

int main()
{
    int n;
    scanf("%d",&n);

    int i,j;
    for(i = 0; i<n; i++){

        char mystr[100];
        scanf("%s",mystr);

        for(j = 0; j<strlen(mystr); j++){

            if(mystr[j]==OPEN){
                stck.push(mystr[j]);
            }
            else if(mystr[j]==CLOSE){
                if(!stck.empty()&&stck.top()==OPEN){
                    stck.pop();
                }
                else {
                    stck.push(mystr[j]);
                }
            }
        }

        if(stck.empty()) printf("YES\n");
        else printf("NO\n");

        while(!stck.empty()) stck.pop();

    }
}
