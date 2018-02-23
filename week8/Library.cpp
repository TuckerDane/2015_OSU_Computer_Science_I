#include "Library.hpp"

Library::Library()
{
	currentDate = 0;
}

void Library::addBook(Book* bookIn)
{
	holdings.push_back(bookIn);
}

void Library::addPatron(Patron* patronIn)
{
	members.push_back(patronIn);
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			checkOutBook:
//		    * if the specified Book is not in the Library, return "book not found"
//			* if the specified Patron is not in the Library, return "patron not found"
//			* if the specified Book is already checked out, return "book already checked out"
//			* if the specified Book is on hold by another Patron, return "book on hold by other patron"
//			* otherwise update the Book's checkedOutBy, dateCheckedOut and Location; if the Book was on
//			  hold for this Patron, update requestedBy; update the Patron's checkedOutBooks; return "check out successful"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

std::string Library::checkOutBook(std::string pID, std::string bID)
{
	/**************************************************************************************
	* If the specified Book is not in the Library, return "book not found"
	***************************************************************************************/

	bool found = false;									// a variable called found that tracks whether or not a book or patron was found in the library's holdings or members
	int bookLocation;									// a variable called bookLocation that indexes a book's location in holdings
	int patronLocation;									// a variable called patronLocation that indexes a patron's location in members

	for (size_t i = 0; i < holdings.size(); i++)			// checks the library and changes found to true if bID matches any of the books in holdings.
	{
		if ((holdings[i]->getIdCode()) == bID)
		{
			found = true;
			bookLocation = i;
			break;
		}
	}

	if (found = false)									// if the book is not found in the library's holdings, returns "book not found"
	{	
		return "book not found";
	}

	/**************************************************************************************
	* If the specified Patron is not in the Library, return "patron not found"
	***************************************************************************************/

	found = false;									// re-use of the found variable

	for (size_t i = 0; i < members.size(); i++)
	{
		if ((members[i]->getIdNum()) == pID)		// checks the library and changes found to true if pID matches any of the patrons in members.
		{
			found = true;
			patronLocation = i;
			break;
		}
	}

	if (found = false)								// if the patron is not found in the library's members, returns "patron not found"
	{
		return "patron not found";
	}

	/**************************************************************************************
	* If the specified Book is already checked out, return "book already checked out"
	***************************************************************************************/

	if ((holdings[bookLocation]->getLocation()) == CHECKED_OUT)
	{
		return "book already checked out";
	}

	/********************************************************************************************
	* If the specified Book is on hold by another Patron, return "book on hold by other patron"
	*********************************************************************************************/

	// IF(		the book being requested is on hold			   ) AND (				the book is not requested by this patron			)
	if (((holdings[bookLocation]->getLocation()) == ON_HOLD_SHELF) && ((holdings[bookLocation]->getRequestedBy()) != members[patronLocation]))
	{
		return "book on hold by other patron";
	}

	/********************************************************************************************
	* Update the Book's checkedOutBy, dateCheckedOut and Location
	*********************************************************************************************/

	holdings[bookLocation]->setCheckedOutBy(members[patronLocation]);
	holdings[bookLocation]->setDateCheckedOut(currentDate);
	holdings[bookLocation]->setLocation(CHECKED_OUT);

	/********************************************************************************************
	* If the Book was on hold for this Patron, update requestedBy
	*********************************************************************************************/

	if ((holdings[bookLocation]->getRequestedBy()) == members[patronLocation])
	{
		holdings[bookLocation]->setRequestedBy(NULL);
	}

	/********************************************************************************************
	* Update the Patron's checkedOutBooks; return "check out successful"
	*********************************************************************************************/

	members[patronLocation]->addBook(holdings[bookLocation]);
	return "check out successfull";
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			returnBook:
//		    * if the specified Book is not in the Library, return "book not found"
//			* if the Book is not checked out, return "book already in library"
//			* update the Patron's checkedOutBooks; update the Book's location depending on whether another Patron has
//			  requested it; update the Book's checkedOutBy; return "return successful"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

std::string Library::returnBook(std::string bID)
{
	/**************************************************************************************
	* If the specified Book is not in the Library, return "book not found"
	***************************************************************************************/
	bool found = false;									// a variable called found that tracks whether or not a book or patron was found in the library's holdings or members
	int bookLocation;									// a variable called bookLocation that indexes a book's location in holdings

	for (size_t i = 0; i < holdings.size(); i++)		// checks the library and changes found to true if bID matches any of the books in holdings.
	{
		if ((holdings[i]->getIdCode()) == bID)
		{
			found = true;
			bookLocation = i;
			break;
		}
	}

	if (found = false)									// if the book is not found in the library's holdings, returns "book not found"
	{
		return "book not found";
	}

	/**************************************************************************************
	* If the Book is not checked out, return "book already in library"
	***************************************************************************************/

	if ((holdings[bookLocation]->getCheckedOutBy()) == NULL)		// if no one has checked out the book, its in the library
	{
		return "book already in library";
	}

	/**************************************************************************************
	* Update the Patron's checkedOutBooks
	***************************************************************************************/

	(holdings[bookLocation]->getCheckedOutBy())->removeBook(holdings[bookLocation]);

	/**************************************************************************************
	* Update the Book's location depending on whether another Patron has requested it
	***************************************************************************************/

	if ((holdings[bookLocation]->getRequestedBy()) != NULL)		// if the book is requested by another patron, put it on hold
	{
		holdings[bookLocation]->setLocation(ON_HOLD_SHELF);
	}
	else														// otherwise, put the book back on the shelf
	{
		holdings[bookLocation]->setLocation(ON_SHELF);
	}

	/**************************************************************************************
	* Update the Book's checkedOutBy
	***************************************************************************************/

	holdings[bookLocation]->setCheckedOutBy(NULL);				// the book is no longer checked out

	/**************************************************************************************
	* Return "return successful"
	***************************************************************************************/

	return "return successful";
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			requestBook:
//		    * if the specified Book is not in the Library, return "book not found"
//			* if the specified Patron is not in the Library, return "patron not found"
//			* if the specified Book is already requested by another Patron, return "book on hold by other patron"
//			* update the Book's requestedBy; if the Book is on the shelf, update its location to on hold;
//			  return "request successful"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

std::string Library::requestBook(std::string pID, std::string bID)
{
	/**************************************************************************************
	* If the specified Book is not in the Library, return "book not found"
	***************************************************************************************/

	bool found = false;									// a variable called found that tracks whether or not a book or patron was found in the library's holdings or members
	int bookLocation;									// a variable called bookLocation that indexes a book's location in holdings
	int patronLocation;									// a variable called patronLocation that indexes a patron's location in members

	for (size_t i = 0; i < holdings.size(); i++)			// checks the library and changes found to true if bID matches any of the books in holdings.
	{
		if ((holdings[i]->getIdCode()) == bID)
		{
			found = true;
			bookLocation = i;
			break;
		}
	}

	if (found = false)									// if the book is not found in the library's holdings, returns "book not found"
	{
		return "book not found";
	}

	/**************************************************************************************
	* If the specified Patron is not in the Library, return "patron not found"
	***************************************************************************************/

	found = false;									// re-use of the found variable

	for (size_t i = 0; i < members.size(); i++)
	{
		if ((members[i]->getIdNum()) == pID)		// checks the library and changes found to true if pID matches any of the patrons in members.
		{
			found = true;
			patronLocation = i;
			break;
		}
	}

	if (found = false)								// if the patron is not found in the library's members, returns "patron not found"
	{
		return "patron not found";
	}

	/******************************************************************************************************
	* If the specified Book is already requested by another Patron, return "book on hold by other patron"
	*******************************************************************************************************/

	// IF(		the book being requested is on hold			   ) AND (				the book is not requested by this patron			)
	if (((holdings[bookLocation]->getLocation()) == ON_HOLD_SHELF) && ((holdings[bookLocation]->getRequestedBy()) != members[patronLocation]))
	{
		return "book on hold by other patron";
	}

	/**************************************************************************************
	* Update the Book's requestedBy
	***************************************************************************************/

	holdings[bookLocation]->setRequestedBy(members[patronLocation]);

	/**************************************************************************************
	* If the Book is on the shelf, update its location to on hold
	***************************************************************************************/

	if ((holdings[bookLocation]->getLocation()) == ON_SHELF)
	{
		holdings[bookLocation]->setLocation(ON_HOLD_SHELF);
	}

	/**************************************************************************************
	* Return "request successful"
	***************************************************************************************/

	return "request successful";
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			payFine:
//			* takes as a parameter the amount that is being paid (not the negative of that amount)
//			* if the specified Patron is not in the Library, return "patron not found"
//			* use amendFine to update the Patron's fine; return "payment successful"
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

std::string Library::payFine(std::string pID, double payment)
{
	/**************************************************************************************
	* If the specified Patron is not in the Library, return "patron not found"
	***************************************************************************************/

	bool found = false;								// a variable called found that tracks whether or not a patron was found in the library's holdings or members
	int patronLocation;								// a variable called patronLocation that indexes a patron's location in members

	for (size_t i = 0; i < members.size(); i++)
	{
		if ((members[i]->getIdNum()) == pID)		// checks the library and changes found to true if pID matches any of the patrons in members.
		{
			found = true;
			patronLocation = i;
			break;
		}
	}

	if (found = false)								// if the patron is not found in the library's members, returns "patron not found"
	{
		return "patron not found";
	}

	/**************************************************************************************
	* Uses amendFine to update the Patron's fine; return "payment successful"
	***************************************************************************************/
	members[patronLocation]->amendFine(payment *= -1);	// payment is multiiplied by -1 because in amendFine, a positive argument increases the fineAmount
	return "payment successful";
}

/*/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//			incrementCurrentDate:
//			* increment current date; increase each Patron's fines by 10 cents for each overdue
//			  Book they have checked out (using amendFine)
//			* If a book is checked out on day 0, then on day 1, the patron has had it for 1 day.  On day 21, the
//			  patron has had it for 21 days, so it is still not overdue.  On day 22, the book is overdue and fines will be charged.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

void Library::incrementCurrentDate()
{
	/**************************************************************************************
	* Increment current date
	***************************************************************************************/
	currentDate++;

	/**************************************************************************************
	* Increase each Patron's fines by 10 cents for each overdue Book they have checked out
	***************************************************************************************/

	for (size_t i = 0; i < members.size(); i++)																	// iterates through all patrons and increases their fines accordingly
	{

		for (size_t j = 0; j < (members[i]->getCheckedOutBooks()).size(); j++)									// iterates through each book a patron has and increases the patron's fines accordingly
		{
			int daysCheckedOut = currentDate - (members[i]->getCheckedOutBooks()[j]->getDateCheckedOut());		// the number of days the book has been checked out
			int checkOutLength = members[i]->getCheckedOutBooks()[j]->getCheckOutLength();						// the number of days the book is allowed to be checked out

			if (daysCheckedOut > checkOutLength)																// if the book is overdue, increase the member's fine by 0.10
			{
				members[i]->amendFine(0.10);
			}
		}
	}
}

/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// returns a pointer to the Patron corresponding to the ID parameter, or NULL if no such Patron is a member
///////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

Patron* Library::getPatron(std::string pID)
{
	for (size_t i = 0; i < members.size(); i++)
	{
		if (pID == members[i]->getIdNum())		// if the Patron ID is found in the list of library members, return the Patron
		{
			return members[i];
		}
	}

	return NULL;								// if no Patron ID matchin the pID argument is found, return NULL
}

/*///////////////////////////////////////////////////////////////////////////////////////////////////////////////
// returns a pointer to the Book corresponding to the ID parameter, or NULL if no such Book is in the holdings
///////////////////////////////////////////////////////////////////////////////////////////////////////////////*/

Book* Library::getBook(std::string bID)
{
	for (size_t i = 0; i < holdings.size(); i++)
	{
		if (bID == holdings[i]->getIdCode())		// if the Book IDcode is found in the list of holdings, return the Book
		{
			return holdings[i];
		}
	}

	return NULL;									// if no Book IDcode matchin the bID argument is found, return NULL
}