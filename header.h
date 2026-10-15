#ifndef HEADER_H
#define HEADER_H

#define MAX 100
extern char stack[MAX];
extern int top;

int check_operand(char ch);
int check_operator(char ch);
int check_precedence(char ch);

void push(char ch);
char pop(void);

void InfixtoPostfix(char in[],char post[]);

#endif
