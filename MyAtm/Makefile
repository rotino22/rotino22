 atmm: greeting.o atm.o
	gcc -o atmm greeting.o atm.o
atm.o: atm.c
	gcc -c atm.c
greeting.o: greeting.c
	gcc -c greeting.c
clean:
	rn atmm *.o