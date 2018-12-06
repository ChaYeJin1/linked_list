#include <stdlib.h>
#include <stdio.h>

typedef struct linknd{
	int data;
	
	void *next;
	//struct linked *next;
}linknd_t;

static linknd_t *list; //linked list 실체 

linknd_t* create_node(int value){
	linknd_t* ndPtr;
	
	ndPtr = (linknd_t*)malloc(sizeof(linknd_t)); //동적 메모리 할당 
	if(ndPtr == NULL)
	{
		printf("ERROR\n");
		return NULL;
	} 
	ndPtr->data = value; //정수값 저장 
	ndPtr->next = NULL;
	
	return ndPtr; 
}

void addTail(int value)
{
	linknd_t *ndPtr;
	linknd_t *newPtr;
	
	if(list==NULL)
	{
		return;
	}
	else
	{
		ndPtr=list;
		while(ndPtr->next != NULL)
		{
			ndPtr = ndPtr->next;
		}
		newPtr=create_node(value);
		ndPtr->next = newPtr;
	}
}

