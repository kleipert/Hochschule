#pragma once
#include "iostream"

class publication
{
public:

    std::string GetTitle();
    std::string GetAuthor();
    int GetRelease();
    void Borrow();
    void Return();
    virtual std::string GetIdentification() = 0;

private:
    std::string m_title;
    std::string m_author;
    int m_release;
    bool m_isAvailable;
};
