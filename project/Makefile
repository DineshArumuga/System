cc=gcc
output:main.o access_element.o declaration.o pattern.o print.o rand_function.o string_compare.o acending_char.o
	$(cc) $^ -o $@
main.o:main.c
	$(cc) -g -c $<
access_element.o:access_element.c
	$(cc) -g -c $<
declaration.o:declaration.c
	$(cc) -g -c $<
pattern.o:pattern.c
	$(cc) -g -c $<
print.o:print.c
	$(cc) -g -c $<
rand_function.o:rand_function.c
	$(cc) -g -c $<
string_compare.o:string_compare.c
	$(cc) -g -c $<
acending_char.o:acending_char.c
	$(cc) -g -c $<
clean:
	rm *.o
	rm -f output


