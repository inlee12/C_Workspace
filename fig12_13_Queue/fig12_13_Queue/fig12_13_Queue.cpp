/* Fig. 12.13: fig12_13.c
 Operating and maintaining a queue */
#include "stdafx.h"
#include <stdlib.h>

/* self-referential structure */
struct queueNode {
char data;                 /* define data as a char */
struct queueNode *nextPtr; /* queueNode pointer */

}; 

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

/* function prototypes */
void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr,
              char value);
void instructions(void);

/* function main begins program execution */
int main(void)
{
	QueueNodePtr headPtr = NULL; /* initialize headPtr */
	QueueNodePtr tailPtr = NULL; /* initialize tailPtr */
	int choice;                  /* user's menu choice */
	char item;                   /* char input by user */

	instructions(); /* display the menu */
	printf( "? " );
	scanf_s( "%d", &choice );

	/* while user does not enter 3 */
	while ( choice != 3 ) { 

	switch( choice ) { 
		case 1: /* enqueue value */
			printf( "Enter a character: " );
			scanf_s( "\n%c", &item , 1);
			enqueue( &headPtr, &tailPtr, item );
			printQueue( headPtr );
			break;

		case 2:  /* dequeue value */
			if ( !isEmpty( headPtr ) ) { /* if queue is not empty */	 
				item = dequeue( &headPtr, &tailPtr );
				printf( "%c has been dequeued.\n", item );
			}	
			printQueue( headPtr );
			break;
		
		default:
			printf( "Invalid choice.\n\n" );
			instructions();
			break;
		} /* end switch */
	   printf( "? " );
	   scanf_s( "%d", &choice );
	} /* end while */
	
	printf( "End of run.\n" );
	return 0; 
} /* end main */
	
/* display program instructions to user */
void instructions( void )
{ 
	printf ( "Enter your choice:\n"
		"   1 to add an item to the queue\n"
		"   2 to remove an item from the queue\n"
		"   3 to end\n" );
	} /* end function instructions */

 /* insert a node a queue tail */
void enqueue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value )
{ 
	QueueNodePtr newPtr; /* pointer to new node */
	newPtr = (QueueNodePtr) malloc( sizeof( QueueNode ) );
	if ( newPtr != NULL ) { /* is space available */ 
		newPtr->data = value;
		newPtr->nextPtr = NULL;

		if ( isEmpty( *headPtr ) )   /* if empty, insert node at head */
			*headPtr = newPtr;
		else 
			 ( *tailPtr )->nextPtr = newPtr;
	    
		*tailPtr = newPtr;
	} 
	else {
		printf( "%c not inserted. No memory available.\n", value );
	} /* end else */
} 

  /* remove node from queue head */
char dequeue( QueueNodePtr *headPtr, QueueNodePtr *tailPtr )
{ 
	char value;           /* node value */
	QueueNodePtr tempPtr; /* temporary node pointer */

	value = ( *headPtr )->data;      
	tempPtr = *headPtr;              
	*headPtr = ( *headPtr )->nextPtr;
	
	if ( *headPtr == NULL ) { /* if queue is empty */
		*tailPtr = NULL;
	} 
	free( tempPtr );
	return value;
} 
	
int isEmpty( QueueNodePtr headPtr )  /* Return 1 if the list is empty, 0 otherwise */
{ 
	return headPtr == NULL;
} /* end function isEmpty */

	
/* Print the queue */
void printQueue( QueueNodePtr currentPtr )
{ 
	if ( currentPtr == NULL ) {  /* if queue is empty */
		printf( "Queue is empty.\n\n" );
	} 
	else {
		printf( "The queue is:\n" );

	    while ( currentPtr != NULL ) {  /* while not end of queue */ 
			printf( "%c --> ", currentPtr->data );
			currentPtr = currentPtr->nextPtr;
		} 

		printf( "NULL\n\n" );
	} /* end else */

} /* end function printQueue */   
 






