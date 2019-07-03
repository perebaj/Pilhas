output: Lista4_exc2.o pilha.o 	
	gcc Lista4_exc2.o pilha.o -o output

Lista4_exc2.o: Lista4_exc2.c
	gcc -c Lista4_exc2.c 

pilha.o: pilha.c pilha.h
	gcc -c pilha.c

clear: 
	rm *.o output
##target: dependencies
	##action