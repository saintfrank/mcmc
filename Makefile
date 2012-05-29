CC=clang++

CFLAG=
CLINK=

simple_sample: simple_method.cpp
	$(CC) $(CFLAG) $(CLINK) simple_method.cpp -o $@

clean: 
	rm simple_sample 
