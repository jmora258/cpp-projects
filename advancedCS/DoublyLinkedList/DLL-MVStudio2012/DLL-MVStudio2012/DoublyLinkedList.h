/* Author: 			Justino Mora
 * Project: 		Doubly-Linked List 
 * Date: 			April 17, 2015 
 * Description: 	DoubliyLinkedList Header file 
*/ 

#ifndef _DOUBLY_LINKED_LIST_H
#define _DOUBLY_LINKED_LIST_H

typedef double ItemType; // will accept any type 

// Linked List will be composed of Nodes, each node consists of a value 
// and 2 pointer Nodes. The *next will point to the next Node after it, and 
// the *prev will point to the node behind it. The first Node's *prev will 
// point to the nullptr just as the last Node's *next pointer will point to
// the nullptr. 
struct Node 
{
	ItemType value; 
	int count; // # of times value appears in the list 
	Node *next;
	Node *prev;  
}; 


class DoublyLinkedList 
{
	public: 
		DoublyLinkedList(); 
		DoublyLinkedList(ItemType v); // create & add 1 item
		~DoublyLinkedList(); 

		bool addItem(ItemType v); 
		bool addToFront(ItemType v);
		bool addToRear(ItemType v); 
		
		bool findItemLS(ItemType v) const; // linear search Big-O(N) 
		bool deleteItem(ItemType v); // deletes the item completely from the list
		void printItems() const; // prints all of the items in the list 
		
		// Accessor Methods: 
		int getSize() const;
		int getItemCount(ItemType v);  // returns -1 if item is not in the list

	private: 
		Node* head; 
		Node* tail; 
		int m_size; // list's size 
		Node* getItemLS(ItemType v);  // returns ptr to node whose value == v
};

 #endif 

