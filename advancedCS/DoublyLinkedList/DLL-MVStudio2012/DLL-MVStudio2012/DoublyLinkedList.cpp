/* Author: 			Justino Mora
 * Project: 		Doubly-Linked List 
 * Date: 			April 17, 2015 
 * Description: 	DoubliyLinkedList implementation file 
*/ 

#include "DoublyLinkedList.h"

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
	newItem->next = newItem->prev = nullptr;
	m_size = 1; 
}

bool DoublyLinkedList::addItem(ItemType v)
{
	// doesn't matter where we add the item
	if(addToFront(v))
		return true; 
	return false; 
}

bool DoublyLinkedList::addToFront(ItemType v)
{
	Node* newItem = new Node;

	if(head == nullptr) // no items in the list 
	{
		newItem->value = v; 
		head = tail = newItem; 
		newItem->next = newItem->prev = nullptr; 
		m_size = 1; 
		return true; 
	}

	// When there's is more than 1 item in the list: 
	newItem->value = v; 
	newItem->next = head; 
	head->prev = newItem; 
	head = newItem; 
	newItem->prev = nullptr; 
	m_size++; 

	return true; 
}

bool DoublyLinkedList::addToRear(ItemType v) 
{
	Node* newItem = new Node;

	if(tail == nullptr) // no items in the list 
	{
		newItem->value = v; 
		head = tail = newItem; 
		newItem->next = newItem->prev = nullptr; 
		m_size = 1; 
		return true; 
	}

	// When there's is more than 1 item in the list: 
	newItem->value = v; 
	newItem->prev = tail; 
	tail->next = newItem; 
	tail = newItem; 
	newItem->next = nullptr; 
	m_size++; 

	return true; 
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