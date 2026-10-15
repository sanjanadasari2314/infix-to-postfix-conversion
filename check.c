#include "header.h"

int check_operand(char ch)
{
        if((ch>='A'&& ch<='Z')||(ch>='a'&&ch<='z')||(ch>='0'&&ch<='9'))
        {
                return 1;
        }
        return 0;
}
int check_operator(char ch)
{
        if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/')||(ch=='%')||(ch=='^'))
        {
                return 1;
        }
        return 0;
}
int check_precedence(char ch)
{
        if(ch=='^')
        {
                return 3;
        }
        if(ch=='*'||ch=='/'||ch=='%')
        {
	       	return 2;
        }
        if(ch=='+'||ch=='-')
        {
                return 1;
        }
        return 0;
}

