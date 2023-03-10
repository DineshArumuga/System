outfile: header.o main.o add_tree.o print.c
	cc header.c main.c add_tree.c print.c -o tree
header.o:header.c
	cc -c header.c
main.o:main.c
	cc -c main.c
add_tree.o:add_tree.c
	cc -c add_tree.c
print.o:print.c
	cc -c print.c
clean:
	rm *.o
	rm tree
