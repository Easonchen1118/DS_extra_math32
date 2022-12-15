#include <stdio.h>
//Armstrong數
int main(){
    int num1, num2, num3;
    scanf("%1d%1d%1d", &num1, &num2, &num3);
    int total = 100*num1 + 10*num2 + num3;
    int ans = 0;
    ans += num1*num1*num1;
    ans += num2*num2*num2;
    ans += num3*num3*num3;
    if (ans == total) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
