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
 	if(myList.addToFront(item))
 		cout << item << " was succesfully added to the front " 
 			 << "of the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the front." << endl ;

	item = 10; 
	cout << endl << "Test addToRear(ItemType v) method: add " << item 
 		 << " to the back of the list!" << endl; 
 	if(myList.addToRear(item))
 		cout << item << " was succesfully added to the back " 
 			 << "of the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the rear." << endl ;

	item = 3; 
	cout << endl << "Test findItemLS() method to find " << item 
		<< " in the list." << endl; 
	if(myList.findItemLS(3)) // find 3; 
		cout << "Found " << item << " in the list!!" << endl; 
	else 
		cout << "Did not find " << item << " in the list!!" << endl; 

	item = 10; 
	cout << endl << "Test adding an already existing value in the list " 
		<< "by using addItem(v) method. If successful, it will be noted:" 
		<< endl; 
	if(myList.addItem(item))
		cout << "Added " << item << " to the list!" << endl; 
	else 
		cout << item << " is already in the list! It was NOT added." << endl; 


 }