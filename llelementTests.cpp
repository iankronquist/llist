#include "llelement.cpp"
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

