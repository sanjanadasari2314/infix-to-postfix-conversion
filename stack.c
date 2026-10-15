#include "header.h"

void push(char ch)
{
        	top++;
        	stack[top]=ch;	
}
char pop(void)
{
        	char ch;
        	ch=stack[top];
        	top--;
        	return ch;	
}
             
