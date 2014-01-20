//#include "llist.h"
#include "llist.c"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main()
{
	int passed = true;
	passed = testllistCreationAndDestruction();
	return 0;
}

int testllistCreationAndDestruction()	
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	//struct llist* arr = llistCreate();
	struct llist* arrdanlist = llistCreateFromArray(array, 10);
	printf("Testing the llistDestroy function\n"); 
	//llistDestroy(arr);
	llistDestroy(arrdanlist);
	printf("Test passed\n");
	return 1;
}
