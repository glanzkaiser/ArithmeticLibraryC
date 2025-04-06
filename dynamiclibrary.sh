g++ -fPIC -c arithmetic.cpp  # compile arithmetic.cpp & enable share -> arithmetic.o
g++ -shared -o libarithmetic.so arithmetic.o  # create *.so shared library then move it to /usr/lib
