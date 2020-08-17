all: hello

clean:
	rm main.o hell
	
hello: main.o
	g++ -g -o hello main.o
	
main.o:
	g++ -c -g main.cpp