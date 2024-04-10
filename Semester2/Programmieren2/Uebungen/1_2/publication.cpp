#include "publication.h"
#include "iostream"

publication::publication(const std::string title, const std::string author, const int release)
{
    m_title = title;
    m_author = author;
    m_release = release;
    m_isAvailable = true;
}

std::string publication::GetTitle()
{
    return m_title;
}

std::string publication::GetAuthor()
{
    return m_author;
}

int publication::GetRelease()
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