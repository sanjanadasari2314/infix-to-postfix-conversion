#include "header.h"

void InfixtoPostfix(char in[],char post[])
{
        int i=0,j=0;
        char ch;
        top=-1;
        while(in[i]!='\0')
        {
                ch=in[i];
                if(check_operand(ch))
		{
                        post[j]=ch;
                        j++;
                }
                else if(ch=='(')
                {
                        push(ch);
                }
                else if(ch==')')
                {
                        while(top!=-1 && stack[top]!='(')
                        {
                                post[j]=pop();
                                j++;
                        }
                        if(top!=-1 && stack[top]=='(')
                        {
                                pop();
                        }

                }
                else if(check_operator(ch))
                {
                        while(top!=-1 && stack[top]!='(' && (check_precedence(stack[top])>check_precedence(ch)||(check_precedence(stack[top])==check_precedence(ch)&&ch!='^')))
                        {
                                post[j]=pop();
				j++;
                        }
                        push(ch);
                }
                i++;
        }
        while(top!=-1)
        {
                post[j]=pop();
                j++;
        }
        post[j]='\0';
}

