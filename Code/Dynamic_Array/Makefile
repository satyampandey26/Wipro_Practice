
all: dynamic

dynamic: main_array.c dynamic lib
	gcc -o array.out main_array dynarray.a
		
dynamiclib: array_func.c
	gcc -c array_func -o dynarray.a
	
clean:
	rm -rf *.out *.a 
