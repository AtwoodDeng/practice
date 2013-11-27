#include <iostream>

class normalClass{
	int foo();
};

class virtualClass{
	virtual int foo();	
};

class twoVirtualClass{
	virtual int foo();
	virtual int bar();
	int car();
};

int main(int argc, char* argv[]) {
	printf("%s %ld\n", "The size of void class " , sizeof(normalClass));
	printf("%s %ld\n", "The size of virtual class " , sizeof(virtualClass));
	printf("%s %ld\n", "The size of virtual class with two method" , sizeof(twoVirtualClass));
	return 0;
} 