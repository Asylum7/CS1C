/************************************************************************
 * AUTHOR			: James Davis
 * ASSIGNMENT #9	: Templates
 * CLASS			: CS1C
 * SECTION			: T Th 6pm
 * DUE DATE			: October 21th, 2014
 ************************************************************************/
#ifndef QUEUE_TEMPLATE_H_
#define QUEUE_TEMPLATE_H_

#include<iostream>
#include<iomanip>
using namespace std;

template <class object>
class Queue
{
public:
	Queue();
	~Queue();

	void   Enqueue(const object& item);
	void   Dequeue();
	object Front();
	int    Size(){return size;};
	bool   IsEmpty(){return head == NULL;};
	void   PrintQueue();
	void   ClearQueue();

private:
	struct node
	{
		object data;
		node* next;
	};
	node* head;
	node* tail;
	int size;
};

template <class object>
Queue<object>::Queue()
: head(NULL), tail(NULL), size(0)
{	}

template <class object>
Queue<object>::~Queue()
{
	delete head;
	delete tail;
}

template <class object>
void Queue<object>::Enqueue(const object& item)
{
	node* dataPtr = new node;
	dataPtr->data = item;
	dataPtr->next = NULL;

	if (!IsEmpty())
	{
		tail->next = dataPtr;
		tail = dataPtr;
	}
	else
	{
		head = dataPtr;
		tail = dataPtr;
	}
	size++;
	dataPtr = NULL;
}

template <class object>
void Queue<object>::Dequeue()
{
	if(!IsEmpty())
	{
		node* dataPtr = head;

		if(head == tail)
		{
			head = NULL;
			tail = NULL;
		}
		else
		{
			head = head->next;
		}
		delete dataPtr;
		dataPtr = NULL;
		size--;
	}
	else
	{
		std::cout << "The Queue is empty, cannot dequeue!";
	}
}

template <class object>
object Queue<object>::Front()
{
	if(!IsEmpty())
	{
		return head->data;
	}
	else
	{
		std::cout << "Nobody in FRONT, the queue is empty!!";
	}
}

template <class object>
void Queue<object>::PrintQueue()
{
	node* printNode;
	printNode = head;
	if(IsEmpty())
	{
		std::cout << "The Queue is empty.\n";
	}
	while(printNode != NULL)
	{
		std::cout << printNode->data << ", ";
		printNode = printNode->next;
	}
}

template <class object>
void Queue<object>::ClearQueue()
{
	while(!IsEmpty())
	{
		Dequeue();
	}
}

#endif /* QUEUE_TEMPLATE_H_ */
