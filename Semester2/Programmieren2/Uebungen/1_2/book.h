#include "publication.h"

enum Gerne {
    fiction,
    nonfiction,
    periodical,
    biography,
    children
};

class book : public publication
{
public:
    explicit book(std::string title, std::string author, int release, Gerne genre, std::string isbn);
    std::string GetIdentification() const override;

private:
    Gerne m_gerne;
    std::string m_isbn;
};



