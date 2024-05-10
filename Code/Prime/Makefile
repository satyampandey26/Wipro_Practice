
all : prime

prime:  primeMain.c primeLib
	gcc -o prime.out primeMain.c primenum.a

primeLib: primeCheck.c 
	gcc -c primeCheck.c -o primenum.a
	
clean: 
	rm -rf *.out *.a 
