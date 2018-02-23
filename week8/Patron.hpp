
#ifndef PATRON_HPP
#define PATRON_HPP

#include <string>
#include <vector>
#include "Book.hpp"

//class LibraryItem;

class Patron
{
private:
    std::string idNum;								//	a unique identifier for a Patron
    std::string name;								//	cannot be assumed to be unique
    std::vector<Book*> checkedOutBooks;				//	a vector of Books that Patron currently has checkedOut
    double fineAmount;								//	how much the Patron owes the Library in late fines (measured in dollars); this is allowed to go negative
public:
    Patron(std::string idn, std::string n);			//	a constructor that takes an idNum and name and initializes fineAmount to zero

	//	some get and set methods
    std::string getIdNum();							
    std::string getName();	
    std::vector<Book*> getCheckedOutBooks();

    void addBook(Book* b);							//	adds the specified Book to checkedOutBooks
    void removeBook(Book* b);						//	removes the specified Book from checkedOutBooks
    double getFineAmount();
    void amendFine(double amount);					//	a positive argument increases the fineAmount, a negative one decreases it
};

#endif
