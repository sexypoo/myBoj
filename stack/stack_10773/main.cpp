#include <iostream>
#include <stack>

using namespace std;

stack<int> stck;

int main()
{
    int a;
    scanf("%d",&a);
    for(int i = 0; i<a; i++){
        int k;
        scanf("%d",&k);
        if(k==0){
            stck.pop();
        }
        else{
            stck.push(k);
        }
    }
    int sum = 0;
    for(int i = 0; !stck.empty(); i++){
        sum += stck.top();
        stck.pop();
    }
    printf("%d",sum);
}
