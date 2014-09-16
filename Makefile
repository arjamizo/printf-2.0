.DEFAULT=test
printf: printf.c
	gcc printf.c -o printf
test: printf
	./printf 42
