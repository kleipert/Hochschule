//////////////////////////////////////////////////////////////////////////
// 2.5.b) Test der Adressbuch- und Person-Klasse
#pragma once
#include "AddressBook.h"
#include "Person.h"

inline void addPeople(AddressBook& addressBook)
{
	auto personBLR = addressBook.addPerson("Bernd", "Luedemann-Ravit");
	auto personVF = addressBook.addPerson("Vinzenz", "Funk");
	auto personDE = addressBook.addPerson("Dan", "Eisenkraemer");

	personBLR->addFriend(personVF);
	personBLR->addFriend(personDE);
	personDE->addFriend(personVF);
	personVF->addFriend(personDE);
}

inline void testAddressBook()
{
	AddressBook addressBook;
	addPeople(addressBook);
	addressBook.printStatus(); std::cout << std::endl;

	std::cout << "Loesche Dan Eisenkraemer..." << std::endl;
	addressBook.removePerson("Dan", "Eisenkraemer");
	addressBook.printStatus(); std::cout << std::endl;
} // Ende Testmethode