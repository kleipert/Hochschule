#include "magazine.h"

magazine::magazine(std::string title, std::string author, int release, std::string issn) : publication(title, author, release), m_issn(issn){}

std::string magazine::GetIdentification() const
{
    return m_issn;
}
