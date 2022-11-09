cc=gcc
output:main.o access_element.o declaration.o pattern.o print.o rand_function.o string_compare.o acending_char.o
	$(cc) $^ -o $@
main.o:main.c
	$(cc) -c $<
access_element.o:access_element.c
	$(cc) -c $<
declaration.o:declaration.c
	$(cc) -c $<
pattern.o:pattern.c
	$(cc) -c $<
print.o:print.c
	$(cc) -c $<
rand_function.o:rand_function.c
	$(cc) -c $<
string_compare.o:string_compare.c
	$(cc) -c $<
acending_char.o:acending_char.c
	$(cc) -c $<
clean:
	rm *.o
	rm -f output
