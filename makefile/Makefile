output:stack.o push.o pop.o display.o
	gcc stack.c push.c pop.c display.c -o exe
stack.o:stack.c
	gcc -c stack.c
push.o:push.c
	gcc -c push.c
pop.o:pop.c
	gcc -c pop.c
display.o:display.c
	gcc -c display.c
clean:
	rm *.o
	rm -f exe
