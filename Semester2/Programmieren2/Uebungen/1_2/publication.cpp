#include "publication.h"
#include "iostream"

publication::publication(std::string title, std::string author, int release)
{
    m_title = title;
    m_author = author;
    m_release = release;
    m_isAvailable = true;
}

std::string publication::GetTitle() const
{
    return m_title;
}

std::string publication::GetAuthor() const
{
    return m_author;
}

int publication::GetRelease() const
{
    return m_release;
}

void publication::Borrow()
{
    if(m_isAvailable)
        m_isAvailable = false;
}

void publication::Return()
{
    if(!m_isAvailable)
        m_isAvailable = true;
}

bool operator==(const publication& lhs, const publication& rhs)
{
    return (lhs.GetIdentification() == rhs.GetIdentification());
}

bool operator!=(const publication& lhs, const publication& rhs)
{
    return !(lhs == rhs);
}

std::ostream& operator<<(std::ostream& os, const publication& pub)
{
    os << "Title: " << pub.GetTitle() << std::endl;
    os << "Author: " << pub.GetAuthor() << std::endl;
    os << "Release: " << pub.GetRelease() << std::endl;
    return os;
}