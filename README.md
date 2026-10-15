# Infix to Postfix Conversion Using Stack in C

## 1. Project Description
- This project converts infix expressions into postfix expressions using a stack.
- It is developed using the C programming language.
- A stack is used to store operators during the conversion process.

## 2. What Is an Infix Expression?
- In an infix expression, the operator is written between the operands.
- Example: `a+b`

## 3. What Is a Postfix Expression?
- In a postfix expression, the operator is written after the operands.
- Example: `ab+`

## 4. Project Files

### 1. main1.c
- Contains the `main()` function, where program execution begins.
- Reads an infix expression from the user.
- Calls the `InfixtoPostfix()` function to convert the expression.
- Prints the resulting postfix expression.

### 2. check.c
- Checks whether a character is an operand or an operator.
- `check_operand()` checks for alphabets and digits.
- `check_operator()` checks for supported operators such as `+`, `-`, `*`, `/`, `%`, and `^`.
- `check_precedence()` assigns precedence values to operators.

### 3. postfix.c
- Contains the `InfixtoPostfix()` function.
- Converts the given infix expression into postfix form.
- Adds operands directly to the output.
- Uses a stack to store operators.
- Handles operator precedence, associativity, and parentheses.

### 4. stack.c
- Contains the functions used to operate the stack.
- `push()` adds a character to the stack.
- `pop()` removes and returns the top character from the stack.
- The variable `top` keeps track of the top position of the stack.

### 5. header.h
- Contains common declarations required by the C source files.
- Defines the `MAX` constant used to specify the array size.
- Declares the shared stack variables and function prototypes.

### 6. Makefile
- A Makefile automates the compilation of the program.
- It compiles each C source file into an object file (`.o`).
- It links the object files to create the executable `a.out`.
- It recompiles files when their source files or listed dependencies change.

#### Makefile Content

```makefile
a.out : main1.o stack.o postfix.o check.o
	gcc main1.o stack.o postfix.o check.o -o a.out

main1.o : main1.c header.h
	gcc -c main1.c

stack.o : stack.c header.h
	gcc -c stack.c

postfix.o : postfix.c header.h
	gcc -c postfix.c

check.o : check.c header.h
	gcc -c check.c
```

**Makefile commands explained:**
- `gcc -c main1.c` compiles `main1.c` and creates `main1.o`.
- The other `gcc -c` commands compile their respective source files.
- `gcc ... -o a.out` links all object files into an executable.
- Each compilation command must begin with a TAB character.



## 8. Author
- Sanjana Dasari
