
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
clean :
	rm -f *.o a.out

