#include<stdio.h>

int calc(int a,int b,char x){
    int result;
    if(x == '+') result = a + b;
    else if(x == '-') result = a - b;
    else if(x == '*') result = a * b;
    else if(x=='/') result = a / b;

    return result;
}

int main(){
    char x;
    int a,b,c;
    
    printf("演算子を入力: ");
    scanf("%c",&x);
    printf("演算したい2つの数値を入力\n");
    scanf("%d %d", &a, &b);
    
    c=calc(a,b,x);

    printf("result: %d\n",c);

    return 0;
}
