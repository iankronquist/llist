#include "llist.hpp"
#include <cstdio>
#include <cassert>

bool testllistCreationAndDestruction();
int main()
{
	bool passed = true;
	
	passed = testllistCreationAndDestruction();
	return 0;
}


bool testllistCreationAndDestruction()	
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//struct llist* arr = llistCreate();
	llist<int>* arrdanlist = new llist<int>(array, 10);
	printf("Testing the llistDestroy function\n"); 
	//llistDestroy(arr);
	delete arrdanlist;
	printf("Test passed\n");
	return 1;
}
