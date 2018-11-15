// CSCI 2530
// Assignment: Assn 6
// Author:     Jahina Hayes
// File:       pqueue.h
// Tab stops:  
#ifndef PQUEUE_H
#define PQUEUE_H
#include "event.h"
#include <cstdio>

//defines the data type of ItemType and PriorityType
//To adjust the data types change them here and pqueue.h
// and pqueue.cpp will all follow
typedef Event* ItemType;
typedef double PriorityType;

typedef void (*ItemPrinter)(ItemType);
typedef void (*PriorityPrinter)(PriorityType);

/*
PQCell will be used as a node of the priority queue,
The data types of Itemtype and Prioritytype will be
decided in pqueue.h however will remain constant
through out the program
*/
struct PQCell;

/*
This structure contains the leader of the priority queue
*/
struct PriorityQueue{
	PQCell* head;

	PriorityQueue()
	{
		head = NULL;
	}
};

/*
Function returns true if q is an empty priority queue
*/
bool isEmpty(const PriorityQueue& q);

/*
funtion adds a an item x to Priority Queue q, in position p
*/
void insert(PriorityQueue& q, ItemType x, PriorityType p);

/*
function removes the first item in the priority queue and passes
Item x, and priority p as out paramters of ItemType& x, PriorityType& p
*/
void remove(PriorityQueue& q, ItemType& x, PriorityType& p);

/*
This will print each of the items in the priority queue q from
first to last pi and pp will be used as printing functions for
the ItemType and PriorityQueue
*/
void printPriorityQueue(const PriorityQueue& q, ItemPrinter pi, PriorityPrinter pp);


#endif
