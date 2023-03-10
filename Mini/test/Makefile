outfile:main.o read_data.o view.o
	gcc $^ -o exe
.o:.c
	gcc -c $<
clean:
	rm *.o
	rm exe
