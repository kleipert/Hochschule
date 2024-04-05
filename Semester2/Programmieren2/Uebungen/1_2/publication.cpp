#include "publication.h"
#include "iostream"


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