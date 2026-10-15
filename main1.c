#include<stdio.h>
#include "header.h"
#include<string.h>
char stack[MAX];
int top=-1;

int main()
{
        char in[MAX];
        char post[MAX];
        printf("Enter the infix expressions\n");
        scanf("%99s",in);
        InfixtoPostfix(in,post);
        printf("postfix expression:%s\n",post);
}
