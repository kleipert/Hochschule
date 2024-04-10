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
    explicit book(const std::string title, const std::string author, const int release, const Gerne genre, const std::string isbn);
    std::string GetIdentification() override;

private:
    Gerne m_gerne;
    std::string m_isbn;
};



