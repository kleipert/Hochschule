//
// Created by Anwender on 10.04.2024.
//

#include "book.h"

book::book(std::string title, std::string author, int release, Gerne gerne, std::string isbn) : publication(title, author, release), m_gerne(gerne), m_isbn(isbn){}

std::string book::GetIdentification() const
{
    return m_isbn;
}
