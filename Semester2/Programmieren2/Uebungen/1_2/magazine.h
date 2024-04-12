#include "publication.h"

class magazine : public publication
{
public:
    magazine(std::string title, std::string author, int release, std::string issn);
    std::string GetIdentification() const override;
private:
    std::string m_issn;
};
