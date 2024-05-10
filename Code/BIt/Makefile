all: bitnegator 

bitnegator :  bit.c bitlib
	gcc -o bit.out bit.c bitnew.a
	
bitlib : negator.c
	gcc -c negator.c -o bitnew.a 
	
clean : 
	rm -rf *.out *.a 
