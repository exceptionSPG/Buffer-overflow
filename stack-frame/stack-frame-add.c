#include <stdio.h>
int add(int a, int b){
    int c = a + b;
    return c;
}
int main(){
    int a = 5;
    int b = 5;
    int c = add(a,b);
    printf("%d",c);
    return 0;
}