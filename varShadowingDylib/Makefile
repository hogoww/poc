#MacOs version
all:
	gcc -g -shared -o libpoc.dylib -fPIC libpoc.c -Wall
	gcc -g -o main main.c -L. -lpoc -fPIC -Wall

	export DYLD_LIBRARY_PATH=. && ./main


#Unix version
all:
	gcc -g -shared -o libpoc.so -fPIC libpoc.c -Wall
	gcc -g -o main main.c -L. -lpoc -fPIC -Wall

	export LD_LIBRARY_PATH=. && ./main
