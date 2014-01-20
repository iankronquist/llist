//#include "llist.h"
//#include "llist.cpp"
#include "llelement.hpp"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool testElementCreation();
int main()
{
	int passed = true;
	//passed = testllistCreationAndDestruction();
	passed = testElementCreation();
	return 0;
}

bool testElementCreation()
{
	puts("a");
	llelement<int>* elem = new llelement<int>(10, NULL, NULL);
	puts("b");
	delete elem;
	return true;
}

/*
int testllistCreationAndDestruction()	
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//struct llist* arr = llistCreate();
	llist* arrdanlist = new llist(array, 10);
	printf("Testing the llistDestroy function\n"); 
	//llistDestroy(arr);
	~llist(arrdanlist);
	printf("Test passed\n");
	return 1;
}*/
