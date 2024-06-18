#include <iostream>

class Book {
private:
    //Given member variables
    std::string Title;
    std::string Author;
    std::string ISBN;
    std::string Publisher;

public:

    Book(std::string title, std::string author, std::string isbn, std::string publisher): Title(title), Author(author), ISBN(isbn), Publisher(publisher){}
    
    //Get and Set Method
    std::string getTitle(){return Title; }
    std::string getAuthor(){return Author; }
    std::string getISBN(){return ISBN; }
    std::string getPublisher(){return Publisher; }
    
    void setTitle(std::string bktitle){Title = bktitle;}
    void setAuthor(std::string bkauthor){Author = bkauthor;}
    void setISBN(std::string bkisbn){ISBN = bkisbn;}
    void setPublisher(std::string bkpublisher){Publisher = bkpublisher;}
};

