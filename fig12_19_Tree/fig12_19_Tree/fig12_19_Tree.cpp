/* Fig. 12.19: fig12_19.c
Create a binary tree and traverse it
preorder, inorder, and postorder */

#include "stdafx.h"
#include <stdlib.h>
#include <time.h>

struct treeNode {
	struct treeNode *leftPtr;  /* pointer to left subtree */
	int data;                  /* node value */
	struct treeNode *rightPtr; /* pointer to right subtree */
};

typedef struct treeNode TreeNode; 
typedef TreeNode *TreeNodePtr; 

void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

int main(void)
{
	int i;     /* counter to loop from 1-10 */
	int item;  /* variable to hold random values */
	TreeNodePtr rootPtr = NULL; /* tree initially empty */

	srand( time_t( NULL ) ); 
	printf( "The numbers being placed in the tree are:\n" );
	
	for ( i = 1; i <= 10; i++ ) {  
		item = rand() % 15;  //  insert 0 ~ 14  in a tree
		printf( "%3d", item );
		insertNode( &rootPtr, item );
	} 

	printf( "\n\nThe preOrder traversal is:\n" );
	preOrder( rootPtr );

	printf( "\n\nThe inOrder traversal is:\n" );
	inOrder( rootPtr );
	
	printf( "\n\nThe postOrder traversal is:\n" );
	postOrder( rootPtr );
	
	return 0; 

} 

void insertNode( TreeNodePtr *treePtr, int value )
{ 
	if ( *treePtr == NULL ) {   /* if tree is empty */
		*treePtr = (TreeNodePtr) malloc( sizeof( TreeNode ) );
		if ( *treePtr != NULL ) { 
			( *treePtr )->data = value;
		    ( *treePtr )->leftPtr = NULL;
		    ( *treePtr )->rightPtr = NULL;
		 } 
		else {
	         printf( "%d not inserted. No memory available.\n", value );
	     } 
	} 
	else { /* tree is not empty */
		/* data to insert is less than data in current node */
	     if ( value < ( *treePtr )->data ) {                   
	        insertNode( &( ( *treePtr )->leftPtr ), value );   
	     }                                         
	    /* data to insert is greater than data in current node */
	      else if ( value > ( *treePtr )->data ) {                 
				insertNode( &( ( *treePtr )->rightPtr ), value );     
	    }                                     
		else { /* duplicate data value ignored */
	         printf( "dup" );
		 } 
	} 
} 
	
void inOrder( TreeNodePtr treePtr )
{ 
	if ( treePtr != NULL ) {                
	     inOrder( treePtr->leftPtr );         
	      printf( "%3d", treePtr->data );      
	      inOrder( treePtr->rightPtr );        
	 }                      
} 
	
void preOrder( TreeNodePtr treePtr )
{ 
	 if ( treePtr != NULL ) {                
		printf( "%3d", treePtr->data );      
	    preOrder( treePtr->leftPtr );        
	    preOrder( treePtr->rightPtr );       
	 }                       
} 

void postOrder( TreeNodePtr treePtr )
{ 
	if ( treePtr != NULL ) {                
	    postOrder( treePtr->leftPtr );       
	    postOrder( treePtr->rightPtr );      
	    printf( "%3d", treePtr->data );      
	}                       
} 






