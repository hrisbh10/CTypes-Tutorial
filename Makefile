compile:
	g++ -std=c++14 -c -fPIC printC.cpp -o mylib.o
	g++ -shared mylib.o -o lib.so 
	# The CC used must be g++ here, if you want to use C++ headers and functions
	# Or the linker won't find the right libraries to link the object file to create executables.
	rm mylib.o
	