#pragma once
#include "iostream"

class publication
{
public:

    publication(std::string title, std::string author, int release);
    std::string GetTitle() const;
    std::string GetAuthor() const;
    int GetRelease() const;
    void Borrow();
    void Return();
    virtual std::string GetIdentification() const = 0;

private:
    std::string m_title;
    std::string m_author;
    int m_release;
    bool m_isAvailable;
};

bool operator==(const publication& lhs, const publication& rhs);
bool operator!=(const publication& lhs, const publication& rhs);
std::ostream& operator<<(std::ostream& os, const publication& pub);
