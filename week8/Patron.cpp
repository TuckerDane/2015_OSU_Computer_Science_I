#include "Patron.hpp"


Patron::Patron(std::string idn, std::string n)
{
	idNum = idn;
	name = n;
	fineAmount = 0.0;
}

std::string Patron::getIdNum()
{
	return idNum;
}

std::string Patron::getName()
{
	return name;
}

std::vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}

void Patron::addBook(Book* b)
{
	checkedOutBooks.push_back(b);
}

void Patron::removeBook(Book* b)
{
	for (int i = 0; i < checkedOutBooks.size(); i++)
	{
		if (checkedOutBooks[i] == b)
		{
			checkedOutBooks.erase(checkedOutBooks.begin() + i);
			break;
		}
	}
}

double Patron::getFineAmount()
{
	return fineAmount;
}

void Patron::amendFine(double amount)
{
	fineAmount += amount;
}