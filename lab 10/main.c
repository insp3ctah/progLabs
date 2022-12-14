#include <stdio.h>

int sumFunc(int x){
    if(x==NULL){
        return 0;
    }
    return x%10 + sumFunc(x/10);
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d", sumFunc(n));
}
