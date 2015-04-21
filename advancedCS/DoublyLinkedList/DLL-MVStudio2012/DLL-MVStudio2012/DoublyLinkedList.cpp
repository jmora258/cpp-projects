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
}

DoublyLinkedList::DoublyLinkedList(ItemType v) 
{
	Node* item = new Node; 
	head = tail = item; 
	item->value = v; 
	item->next = nullptr; 
	item->prev = nullptr;
}