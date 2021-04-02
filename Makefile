FC=gcc -c
LD=gcc
SRC=  function.c fact.c hermite.c fx.c delta.c prop.c simp.c main.c
OBJ=  function.o fact.o hermite.o fx.o delta.o prop.o simp.o main.o
ortho:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o data.x -lm
	rm -rf *.o
clean:
	rm -rf data.x
	rm -rf *.o

