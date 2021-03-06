/* Fig. 12.8: fig12_08.c
	dynamic stack program */
#include "stdafx.h"
#include <stdlib.h>

struct stackNode {
	int data;                  
	struct stackNode *nextPtr; 
}; 
typedef struct stackNode StackNode; /* synonym for struct stackNode */
typedef StackNode *StackNodePtr; /* synonym for StackNode* */

void push(StackNodePtr *topPtr, int info);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr topPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main(void)
{
	StackNodePtr stackPtr = NULL; /* points to stack top */
	int choice; /* user's menu choice */
	int value;  /* int input by user */

	while ( 1 ) { 
		instructions(); /* menu */
		printf("? ");
		scanf_s("%d", &choice);
		if (choice == 3)
			break;

		switch ( choice ) { 
			case 1:      
				printf( "Enter an integer: " );
				scanf_s( "%d", &value );
				push( &stackPtr, value );
				printStack( stackPtr );
				break;

			case 2:      
				if ( !isEmpty( stackPtr ) ) { /* if stack is not empty */
					printf( "The popped value is %d.\n", pop( &stackPtr ) );
				} 
				printStack( stackPtr );
				break;
			default:
				printf( "Invalid choice.\n\n" );
				break;
		} //end switch
	} //wnd while
	printf( "End of run.\n" );
	return 0; 
} 

void instructions( void )
{ 
	printf( "Enter choice:\n"
	"1 to push a value on the stack\n"
	"2 to pop a value off the stack\n"
	"3 to end program\n" );
} 
/* Insert a node at the stack top */
void push( StackNodePtr *topPtr, int info )
{ 
	StackNodePtr newPtr; /* pointer to new node */
	newPtr = (StackNodePtr) malloc( sizeof( StackNode ) );
	
	if ( newPtr != NULL ) {  // malloc memory, ok ?         
		 newPtr->data = info;           
		 newPtr->nextPtr = *topPtr;     
		 *topPtr = newPtr;      
	 }                  
	else { /* no space available */
		printf( "%d not inserted. No memory available.\n", info );
	} 
} 
/* Remove a node from the stack top */
int pop( StackNodePtr *topPtr )
{ 
	StackNodePtr tempPtr; /* temporary node pointer */
	int popValue; /* node value */
	
	tempPtr = *topPtr;             
	popValue = ( *topPtr )->data;  
	*topPtr = ( *topPtr )->nextPtr;
	free( tempPtr );               

	return popValue;
} 

void printStack( StackNodePtr currentPtr )
{
	/* if stack is empty */
	if ( currentPtr == NULL ) {
		printf( "The stack is empty.\n\n" );
	} 
	else { 
		printf( "The stack is:\n" );
		while ( currentPtr != NULL ) {  /* while not the end of the stack */
			printf( "%d --> ", currentPtr->data );
			currentPtr = currentPtr->nextPtr;
		} 
		printf( "NULL\n\n" );
	} //end else
} 
/* Return 1 if the stack is empty, 0 otherwise */
int isEmpty( StackNodePtr topPtr )
{ 
	return topPtr == NULL; 
} 
