#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.h"

int main(int argc, char *argv[])
{
	genList();
	
	addTail(10);
	addTail(20);
	addTail(30);
	addTail(40);
	addTail(50);
	
	print_list(3);
	return 0;
}
