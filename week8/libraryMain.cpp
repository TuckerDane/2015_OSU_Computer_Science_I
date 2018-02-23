#include "Library.hpp"
#include <iostream>
using namespace std;

int main()
{
	Book b1("123", "War and Peace", "Tolstoy");

	cout << "Book 1 is as follows: " << endl;
	cout << "ID CODE:	" << b1.getIdCode() << endl;				// 123
	cout << "TITLE:		" << b1.getTitle() << endl;				// War and Peace
	cout << "AUTHOR:	" << b1.getAuthor() << endl << endl;		// Tolstoy

	Book b2("234", "Moby Dick", "Melville");

	cout << "Book 2 is as follows: " << endl;
	cout << "ID CODE:	" << b2.getIdCode() << endl;				// 234
	cout << "TITLE:		" << b2.getTitle() << endl;				// Moby Dick
	cout << "AUTHOR:	" << b2.getAuthor() << endl << endl;		// Melville

	Book b3("345", "Phantom Tollbooth", "Juster");

	cout << "Book 3 is as follows: " << endl;
	cout << "ID CODE:	" << b3.getIdCode() << endl;				// 345
	cout << "TITLE:		" << b3.getTitle() << endl;				// Phantom Tollbooth
	cout << "AUTHOR:	" << b3.getAuthor() << endl;				// Juster

	Patron p1("abc", "Felicity");

	cout << "Patron 1 is as follows: " << endl;
	cout << "ID CODE:	" << p1.getIdNum() << endl;				// abc
	cout << "NAME:		" << p1.getName() << endl;				// Felicity
	
	Patron p2("bcd", "Waldo");

	cout << "Patron 2 is as follows: " << endl;
	cout << "ID CODE:	" << p2.getIdNum() << endl;				// bcd
	cout << "NAME:		" << p2.getName() << endl;				// Waldo
	cout << "Fines: " << p2.getFineAmount() << endl << endl;	// 0.0

	Library lib;
	lib.addBook(&b1);
	lib.addBook(&b2);
	lib.addBook(&b3);
	lib.addPatron(&p1);
	lib.addPatron(&p2);

	cout << "Library has the following books: " << endl;
	cout << lib.getBook("123")->getTitle() << endl;				// War and Peace
	cout << lib.getBook("234")->getTitle() << endl;				// Moby Dick
	cout << lib.getBook("345")->getTitle() << endl << endl;		// Phantom Tollbooth

	cout << "Library has the following patrons: " << endl;
	cout << lib.getPatron("abc")->getName() << endl;			// Felicity
	cout << lib.getPatron("bcd")->getName() << endl << endl;	// Waldo

	lib.checkOutBook("bcd", "234");								// Waldo checks out Moby Dick

	cout << "Waldo has the following book(s) checked out: " << endl;	// Moby Dick
	for (size_t i = 0; i < p2.getCheckedOutBooks().size(); i++)
	{
		cout << p2.getCheckedOutBooks().at(i)->getTitle();
	}

	cout << endl;

	lib.checkOutBook("bcd", "123");								// Waldo checks out War and Peace
	lib.checkOutBook("abc", "345");								// Felicity checks out Phantom Tollbooth

	cout << "Waldo has the following book(s) checked out: " << endl;	// Moby Dick
	for (size_t i = 0; i < p2.getCheckedOutBooks().size(); i++)			// War and Peace
	{
		cout << p2.getCheckedOutBooks().at(i)->getTitle() << endl;
	}

	cout << endl;

	cout << "Felicity has the following book(s) checked out: " << endl;	// Phantom Tollbooth
	for (size_t i = 0; i < p1.getCheckedOutBooks().size(); i++)
	{
		cout << p1.getCheckedOutBooks().at(i)->getTitle();
	}

	cout << endl;

	for (int i = 0; i<41; i++)											// 41 more days go by
		lib.incrementCurrentDate();									    

	lib.payFine("bcd", 0.4);											// Waldo pays .40

	cout << "Felicity's Fine is: " << p1.getFineAmount() << endl;					// 2.00
	cout << "Waldo's Fine is: " << p2.getFineAmount() << endl;						// 3.60

	return 0;
}