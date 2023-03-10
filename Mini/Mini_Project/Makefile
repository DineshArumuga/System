cc=gcc
output:add.o data_component.o delete.o modify.o view.o main.o 
	$(cc) $^ -o $@
main.o:main.c
	$(cc) -g -c $<
add.o:add.c
	$(cc) -g -c $<
data_component.o:data_component.c
	$(cc) -g -c $<
delete.o:delete.c
	$(cc) -g -c $<
modify.o:modify.c
	$(cc) -g -c $<
view.o:view.c
	$(cc) -g -c $<

clean:
	rm *.o
	rm -f output
