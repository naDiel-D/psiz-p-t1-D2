#include "pch.h"
#include "list.h"
#include "stdio.h"
#include "math.h"


List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
}

// adding a new car to list
void addCar(List* pRoot, char* plateNum)
{

}

// deleting a car from list
void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
    int number = 0;
    if (pRoot == NULL)
    {
      return number;
    }

    List *pLastElement = pRoot;
    while(pLastElement->pNext != NULL)
    {
        pLastElement = (pLastElement->pNext);
        number++;
    }
    return number;
}
