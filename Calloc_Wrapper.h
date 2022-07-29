#ifndef CALLOC_WRAPPER_H
#define CALLOC_WRAPPER_H

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    void *p;
    int Identifier;
    struct node *next;
};

/* Wrapper Function which returns the pointer */
void* Calloc_Wrapper(unsigned int block, unsigned int size);

/* Free the particular allocated memory */
unsigned int Free(unsigned int Identifier);

/* Free all the allocated memory */
unsigned int Free_All();

/* Displays the Identifier of the memory */
unsigned int Display();

/* Returns the address of the allocated memory based on the Identifier */
void* GetAllocated_Address(unsigned int Identifier);



#endif