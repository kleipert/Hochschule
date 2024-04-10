#include "magazine.h"

magazine::magazine(const std::string title, const std::string author, const int release, const std::string issn) : publication(title, author, release), m_issn(issn){};

std::string magazine::GetIdentification()
{
    return m_issn;
}
