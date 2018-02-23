
#ifndef BOOK_HPP
#define BOOK_HPP

#include <string>

class Patron;

// These three locations are mutually exclusive, but note that
// a Book can be on request for a Patron while being checked
// out to another Patron.  In that case the Book's location is
// CHECKED_OUT, and when it is returned, it's location will
// become ON_HOLD_SHELF.
enum Locale {ON_SHELF, ON_HOLD_SHELF, CHECKED_OUT};


class Book
{
private:
    std::string idCode;			//	a unique identifier for a Book (think library bar code, not ISBN)
    std::string title;			//	cannot be assumed to be unique
    std::string author;			//	the title and author don't need set methods, since they will never change 
								//	after the object has been created, therefore these fields can be initialized directly within the constructor
    Locale location;			//	a Book can be either on the shelf, on the hold shelf, or checked out
    Patron* checkedOutBy;		//	pointer to the Patron who has it checked out (if any)
    Patron* requestedBy;		//	pointer to the Patron who has requested it (if any); a Book can only be requested by one Patron at a time
    int dateCheckedOut;			//	when a book is checked out, this will be set to the currentDate of the Library
public:

    static const int CHECK_OUT_LENGTH = 21;					//	constant that gives how long a Book can be checked out for
    Book(std::string idc, std::string t, std::string a);	//	takes an idCode, title and author; checkedOutBy and requestedBy 
															//	should be initialized to NULL; a new Book should be on the shelf

	//some get and set methods

    int getCheckOutLength();
    std::string getIdCode();
    std::string getTitle();
    std::string getAuthor();

    Locale getLocation();
    void setLocation(Locale);

    Patron* getCheckedOutBy();
    void setCheckedOutBy(Patron*);

    Patron* getRequestedBy();
    void setRequestedBy(Patron*);

    int getDateCheckedOut();
    void setDateCheckedOut(int);
};


#endif
