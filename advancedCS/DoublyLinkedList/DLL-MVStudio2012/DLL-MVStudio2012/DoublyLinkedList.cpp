/* Author: 			Justino Mora
 * Project: 		Doubly-Linked List 
 * Date: 			April 17, 2015 
 * Description: 	DoubliyLinkedList implementation file 
*/ 

#include "DoublyLinkedList.h"
#include <iostream> 
using namespace std; 

DoublyLinkedList::DoublyLinkedList()
{
	head = nullptr; 
	tail = nullptr; 
	m_size = 0; 
}

DoublyLinkedList::DoublyLinkedList(ItemType v) 
{
	Node* newItem = new Node; 
	head = tail = newItem; 
	newItem->value = v; 
	newItem->count = 1; 
	newItem->next = newItem->prev = nullptr;
	m_size = 1; 
}

bool DoublyLinkedList::addItem(ItemType v)
{
	// doesn't matter where we add the item
	if(addToFront(v)) // we could have used addToRear method
		return true; 
	return false; 
}

bool DoublyLinkedList::addToFront(ItemType v)
{
	Node* newItem = new Node;

	if(head == nullptr) // no items in the list 
	{
		newItem->value = v; 
		newItem->count = 1; 
		head = tail = newItem; 
		newItem->next = newItem->prev = nullptr; 
		m_size = 1; 
		return true; 
	}

	// When there's is more than 1 item in the list, must ensure we do not 
	//	append an additional node if 'v' is already in the list. If it's 
	//	already in the list, just update v's count variable. 
	
	Node* isPresent = getItemLS(v); 

	if( isPresent == nullptr) // v is not yet in the list, so add it
	{
		newItem->value = v; 
		newItem->next = head; 
		head->prev = newItem; 
		head = newItem; 
		newItem->prev = nullptr; 
		newItem->count++; 
		m_size++; 
		return true; 
	}

	isPresent->count++; // v is already in the list, update its count variable
	return false; // did not create a new node for v
}

bool DoublyLinkedList::addToRear(ItemType v) 
{
	Node* newItem = new Node;

	if(tail == nullptr) // no items in the list 
	{
		newItem->value = v; 
		head = tail = newItem; 
		newItem->next = newItem->prev = nullptr; 
		newItem->count = 1; 
		m_size = 1; 
		return true; 
	}

	// When there's is more than 1 item in the list, must ensure we do not 
	//	append an additional node if 'v' is already in the list. If it's 
	//	already in the list, just update v's count variable. 
	
	Node* isPresent = getItemLS(v); 
	
	if( isPresent == nullptr) // v is not in the list 
	{
		newItem->value = v; 
		newItem->prev = tail; 
		tail->next = newItem; 
		tail = newItem; 
		newItem->next = nullptr; 
		newItem->count = 1; 
		m_size++; 
		return true; 
	}

	isPresent->count++; // v is already in the list, update its count variable
	return false;  // did not create a new Node for v
}

bool DoublyLinkedList::deleteItem(ItemType v)
{
	// 
	Node* itemToDelete = getItemLS(v); // retrieve ptr to item to be deleted
	
	if(m_size == 1)// only 1 item in the list 
	{
		delete itemToDelete; 
		head = tail = nullptr; 
	}
	else if(itemToDelete != nullptr) // item is in list, delete it: 
	{
		// Item is the first item in the list: 
		if(itemToDelete == head)
		{
			head = itemToDelete->next; 
			head->prev = nullptr; 
			delete itemToDelete; 
			return true; 
		}
		// Item is the last item in the list: 
		if(itemToDelete == tail)
		{
			tail = itemToDelete->prev; 
			tail->next = nullptr; 
			delete itemToDelete; 
			return true; 
		}

		// Item is somewhere in the middle: 
		//	1) make the preceding item's next ptr point to the succeeding item
		//	2) make the succeeding item's prev ptr point to the preceding item
		itemToDelete->prev->next = itemToDelete->next; 
		itemToDelete->next->prev = itemToDelete->prev; 
		delete itemToDelete; 

		return true; // item was deleted 
	}

	return false; // nothing was deleted
}

bool DoublyLinkedList::findItemLS(ItemType v) const
{
	Node* traversal = head; 

	// Linear Search (will implement binary search at another point in time):
	while( traversal != nullptr ) 
	{
		if( traversal->value == v )
			return true; 
		traversal = traversal->next; 
	}
	return false; // did not find item. 
}

Node* DoublyLinkedList::getItemLS(ItemType v)
{
	Node* traversal = head; 

	// Linear Search (will implement binary search at another point in time):
	while( traversal != nullptr ) 
	{
		if( traversal->value == v )
			return traversal; 
		traversal = traversal->next; 
	}
	traversal = nullptr; // did not find item 
	return traversal; 
}

void DoublyLinkedList::printItems() const
{
	Node* traversal = head; 
	int position = 0; 
	while (traversal != nullptr)
	{
		position++; 
		cout << "Value at position " << position << " is " 
			<< traversal->value << endl; 
		traversal = traversal->next; 
	}
}

int DoublyLinkedList::getSize() const
{
	return m_size; 
}

int DoublyLinkedList::getItemCount(ItemType v)
{
	Node* foundItem = getItemLS(v);

	if(foundItem != nullptr)
		return 5; // (foundItem->count); 

	return -1; // Item is not in the list 
}

DoublyLinkedList::~DoublyLinkedList()
{
	Node* remove = head; 
	Node* traversal = head; 

	while( traversal != nullptr )
	{
		traversal = remove->next; 
		delete remove;
		remove = traversal; 
	}
}