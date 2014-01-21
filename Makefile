
CXX='clang++'
# CXX='g++'

# compile object files for llist
llist-objs:
	$(CXX) -c llist.cpp

# compile object files for llelement
llelement-objs:
	$(CXX) -c llelement.cpp

# compile tests for llist
llist-tests:
	$(CXX) -g llistTests.cpp llist.cpp llelement.cpp -o llist-tests

# compile tests for llelement
llelement-tests:
	$(CXX) -g llelementTests.cpp llelement.cpp -o llelement-tests

# compile all test targets
all-tests: llist-tests llelement-tests

# compile all targets
all: llelement-objs llist-objs all-tests

# remove any compiled files, executables, object files.
clean:
	rm -rf llist-tests
	rm -rf llelement-tests
	rm -rf *.o
