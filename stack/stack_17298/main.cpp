#include <iostream>
#include <stack>


using namespace std;

stack<int> stk;

int arr[1000001];
int result[1000001];

int main()
{
    int n;
    scanf("%d",&n);

    for(int i = 0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i = n; i>=0; i--){
        while(!stk.empty() && stk.top() <= arr[i])
            stk.pop();
        if(stk.empty())
            result[i] = -1;
        else result[i] = stk.top();

        stk.push(arr[i]);
    }

    for(int i = 0; i<n; i++){
        printf("%d ",result[i]);
    }
}
