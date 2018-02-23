#include "Book.hpp"

/*/////////////////////////////////////////////////////////////////////
//	takes an idCode, title and author; 
//	checkedOutBy and requestedBy should be initialized to NULL;
//	a new Book should be on the shelf
//////////////////////////////////////////////////////////////////////*/
Book::Book(std::string idc, std::string t, std::string a)
{
	idCode = idc;
	title = t;
	author = a;

	checkedOutBy = NULL;
	requestedBy = NULL;
	dateCheckedOut = NULL;

	location = ON_SHELF;
}

int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}

std::string Book::getIdCode()
{
	return idCode;
}

std::string Book::getTitle()
{
	return title;
}

std::string Book::getAuthor()
{
	return author;
}

Locale Book::getLocation()
{
	return location;
}

void Book::setLocation(Locale locationIn)
{
	location = locationIn;
}

Patron* Book::getCheckedOutBy()
{
	return checkedOutBy;
}

void Book::setCheckedOutBy(Patron* patronIn)
{
	checkedOutBy = patronIn;
}

Patron* Book::getRequestedBy()
{
	return requestedBy;
}

void Book::setRequestedBy(Patron* patronIn)
{
	requestedBy = patronIn;
}

int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}

void Book::setDateCheckedOut(int dateIn)
{
	dateCheckedOut = dateIn;
}