//
// Created by Anwender on 10.04.2024.
//

#include "book.h"

book::book(const std::string title, const std::string author, const int release, const Gerne gerne, const std::string isbn) : publication(title, author, release), m_gerne(gerne), m_isbn(isbn){}

std::string book::GetIdentification()
{
    return m_isbn;
}
