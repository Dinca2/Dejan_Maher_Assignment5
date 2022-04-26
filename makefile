flags = -Wall -pedantic-errors

compile: main.cpp Sorting.o
	g++ $(flags) -o main  main.cpp Sorting.o

run: compile
	./main int-input.txt

Sorting:
	g++ $(flags) -c Sorting.cpp

clean:
	rm -rf main
	rm -rf *.o
