#include "magazine.h"
#include "book.h"

void Test_Magazine()
{
    std::cout << "Magazine Tests:" << std::endl;
    magazine magOne = magazine("Mag1", "Auth1", 2000, "mag1issn");
    magazine magTwo = magazine("Mag2", "Auth2", 2001, "mag2issn");

    std::cout << "Compare M1 and M2: Should be false: " << (magOne == magTwo) << std::endl;
    std::cout << "GetIdentification Output: \n" << magOne.GetIdentification() << std::endl;
    std::cout << "Output M1 \n" << magOne << std::endl;
}

void Test_Book()
{
    std::cout << "Book Tests:" << std::endl;
    book bookOne = book("Book1", "Auth1", 2000, Gerne::children ,"book1isdn");
    book bookTwo = book("Book2", "Auth2", 2001,Gerne::biography, "book2isdn");

    std::cout << "Compare M1 and M2: Should be false: " << (bookOne == bookTwo) << std::endl;
    std::cout << "GetIdentification Output: \n" << bookOne.GetIdentification() << std::endl;
    std::cout << "Output M1 \n" << bookOne << std::endl;
}

void Test_Both()
{
    std::cout << "Compare Test" << std::endl;
    book bookOne = book("Book1", "Auth1", 2000, Gerne::children ,"book1isdn");
    magazine magOne = magazine("Mag1", "Auth1", 2000, "mag1issn");

    std::cout << "Compare book and mag: Should be false: " << (bookOne == magOne) << std::endl;

}

int main()
{
    Test_Magazine();
    std::cout << "\n";
    Test_Book();
    std::cout << "\n";
    Test_Both();
}
