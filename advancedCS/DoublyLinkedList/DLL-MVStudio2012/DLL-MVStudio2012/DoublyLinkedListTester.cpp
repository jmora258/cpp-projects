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
 	double item = 0; 

 	cout << "==============================================" << endl; 
 	cout << "====== DoubliyLinkedList Tester Program ======" << endl; 
 	cout << endl; 

 	cout << "Test the Constructor: if succesful, then user should "
 		 << "be able to add items to the list." << endl; 

 	DoublyLinkedList myList; 

 	item = 5; 
 	cout << endl << "Test addItem(ItemType v) method: add " << item 
 		 << " to the list!" << endl; 
 	if(myList.addItem(item))
 		cout << item << " was succesfully added!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the list." << endl ;

 	item = 7; 
 	cout << endl << "Test addToFront(ItemType v) method: add " << item 
 		 << " to the front of the list!" << endl; 
 	if(myList.addItem(item))
 		cout << item << " was succesfully added to the front " 
 			 << "of the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the front." << endl ;

 }