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

 	cout << "================================================================" << endl; 
 	cout << "=================== DoubliyLinkedList Tester Program ===========" << endl; 
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
	
	cout << endl << " ================================================================" << endl; 
 	item = 7; 
 	cout << endl << "Test addToFront(ItemType v) method: add " << item 
 		 << " to the front of the list!" << endl; 
 	if(myList.addToFront(item))
 		cout << item << " was succesfully added to the front " 
 			 << "of the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the front." << endl ;

	cout << endl << "================================================================" << endl; 
	item = 10; 
	cout << endl << "Test addToRear(ItemType v) method: add " << item 
 		 << " to the back of the list!" << endl; 
 	if(myList.addToRear(item))
 		cout << item << " was succesfully added to the back " 
 			 << "of the list!" << endl; 
 	else 
 		cout << "Failed to add " << item << " to the rear." << endl ;

	cout << endl << "================================================================" << endl; 
	item = 3; 
	cout << endl << "Test findItemLS() method to find " << item 
		<< " in the list." << endl; 
	if(myList.findItemLS(item)) // find 3, or whatever numer on line 54; 
		cout << "Found " << item << " in the list!!" << endl; 
	else 
		cout << "Did not find " << item << " in the list!!" << endl; 

	cout << endl << "================================================================" << endl; 
	item = 10; 
	cout << endl << "Test adding an already existing value in the list " 
		<< "by using addItem(v) method. If successful, it will be noted:" 
		<< endl; 
	if(myList.addItem(item))
		cout << "Added " << item << " to the list!" << endl; 
	else 
		cout << item << " is already in the list! It was NOT added." << endl; 

	cout << endl << "================================================================" << endl; 
	item = 10; 
	cout << endl << "Test deleteItem(ItemType v) method: delete " << item 
 		 << " from the list!" << endl; 
	cout << "Print items before deleting item. " << endl; 
	myList.printItems(); 
 	if(myList.deleteItem(item))
 		cout << endl << item << " was succesfully deleted from the list!" << endl; 
 	else 
 		cout << endl << "Failed to delete " << item << " from the list." << endl ;
	cout << endl << "Print list after deleting " << item << endl; 
	myList.printItems(); 
	cout << endl; 

	cout << endl << "================================================================" << endl; 
	item = 10; 
	cout << endl << "Double-check that deleteItem(v) works by using the "
		<< endl << "findItemLS() method. Let's find " << item << " in the list." << endl; 
	cout << "If successful, it should say that it did not find the item:" << endl; 
	if(myList.findItemLS(item)) // find 10, but 10 was removed on line 74
		cout << "Found " << item << " in the list!! " << endl; 
	else 
		cout << "Did not find " << item << " in the list!!" << endl; 

	cout << endl << "================================================================" << endl; 
	cout << endl; 
	cout << "TEST printItems() method. If successful, the values in each " 
		<< endl << "of the nodes should be printed with a new line character"
		<< endl << "followed after." << endl; 
	myList.printItems(); 

	cout << endl << "================================================================" << endl; 
	cout << endl << "Test whether if it's possible to directly access any of the "
		<< "item's counter variable." << endl; 
	cout << " .... it's not possible!" << endl; 
	// cout << "Count: " << myList.getItemLS(7)->count; // producess error, as expected

	cout << endl << "================================================================" << endl; 
	cout << "Adding a few more items to the list: 89, 45, 25, 25, 75, 45, 89 " << endl; 
	myList.addItem(89); 
	myList.addItem(45); 
	myList.addToRear(25); 
	myList.addToFront(25); 
	myList.addItem(75);
	myList.addToRear(45); 
	myList.addToFront(89); 
	
	cout << endl << "================================================================" << endl; 
	cout << endl << "Test getSize() method. If successful, it should return the size "
		<< "of the list." << endl; 
	cout << " ---> The size of the list is: " << myList.getSize() << endl << endl; 

	cout << endl << "================================================================" << endl; 
	item = 89; 
	cout << endl << "Test the getItemCount(ItemType v) method. If successful, then "  << endl
		<< item << "'s count variable should be printed out. "; 

	cout << item <<"'s count is: " << myList.getItemCount(item) << endl; 

	cout << "END of TEST!! " << endl; 

 }