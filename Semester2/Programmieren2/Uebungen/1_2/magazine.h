#include "publication.h"

class magazine : publication
{
public:
    magazine(const std::string title, const std::string author, const int release, const std::string issn);
    std::string GetIdentification() override;
private:
    std::string m_issn;
};
