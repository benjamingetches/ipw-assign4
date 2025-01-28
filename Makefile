CXX = g++  # the compiler
CXXFLAGS = -std=c++17 -Wall -Werror -Wpedantic -DCACHE_PLATFORM_MAC -D__aarch64__ #flags

all: test 

test: test.cpp functions_to_implement.cpp
	$(CXX) $(CXXFLAGS) test.cpp functions_to_implement.cpp -o test

clean: 
	$(RM) test *.o