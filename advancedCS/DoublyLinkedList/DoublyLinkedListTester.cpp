/* Author: 			Justino Mora
 * Project: 		Doubly-Linked List 
 * Date: 			April 17, 2015 
 * Description: 	DoubliyLinkedList Tester program 
*/ 

#include "DoublyLinkedList.h"

#include <iostream> 
#include <string> 

 using namespace std; 

 int main() 
 {
 	// Variables needed to test the class: 

 	typedef double item; 
 	item = 0; 

 	cout << "==============================================" << endl; 
 	cout << "====== DoubliyLinkedList Tester Program ======" << endl; 
 	cout << endl; 

 	cout << "Test the Constructor, if succesful, then one should "
 		 << "be able to add an item." << endl; 

 	DoublyLinkedList myList = new DoublyLinkedList(); 

 	item = 5; 
 	cout << "Test addItem(ItemType v) method: add " << item 
 		 << " to the list!" << endl; 
 	if(myList.addItem(item))
 		cout << item << " was succesfully added to the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the list." << endl ;

 	item = 7; 
 	cout << "Test addToFront(ItemType v) method: add " << item 
 		 << " to the front of the list!" << endl; 
 	if(myList.addItem(item))
 		cout << item << " was succesfully added to the front " 
 			 << "of the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the front." << endl ;

 }