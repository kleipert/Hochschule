//////////////////////////////////////////////////////////////////////////
// 2.5.e) Test der Postfach- und E-Mail-Klasse
#pragma once
#include "TestAddressBook.hpp"
#include "Mailbox.h"
#include "PlainText.h"
#include "HtmlMarkup.h"

inline void addMails(Mailbox& mailbox, const AddressBook& addressBook)
{
	mailbox.addMail(
		addressBook.getPerson("Vinzenz", "Funk"),
		addressBook.getPerson("Bernd", "Luedemann-Ravit"),
		MakeMyPointer<PlainText>("Hallo Chef")
	);
	mailbox.addMail(
		addressBook.getPerson("Bernd", "Luedemann-Ravit"),
		addressBook.getPerson("Vinzenz", "Funk"),
		MakeMyPointer<PlainText>("Was gibts?")
	);
}

inline void testMailbox()
{
	AddressBook addressBook;
	addPeople(addressBook);
	addressBook.printStatus(); std::cout << std::endl;

	Mailbox mailbox;
	addMails(mailbox, addressBook);
	mailbox.printStatus();
	addressBook.printStatus(); std::cout << std::endl;

	std::cout << "Loesche Vinzenz Funk..." << std::endl;
	addressBook.removePerson("Vinzenz", "Funk");
	mailbox.printStatus();
	addressBook.printStatus(); std::cout << std::endl;
} // Ende Testmethode