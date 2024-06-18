#include <iostream>
#include "Book.h"

int main() {
    // Creating the Book class
    Book myBook("Percy Jackson & the Olympians: The Lightning Thief", "Rick Riordan", "9780786838653", "Disney Hyperion");
    
    
    std::cout << "Title: " << myBook.getTitle() << std::endl;
    std::cout << "Author: " << myBook.getAuthor() << std::endl;
    std::cout << "ISBN: " << myBook.getISBN() << std::endl;
    std::cout << "Publisher: " << myBook.getPublisher() << std::endl;
    
    std::cout<< std::endl;
    myBook.setTitle("To Kill a Mockingbird");
    std::cout << "Title2: " << myBook.getTitle() << std::endl;
    
    myBook.setAuthor("Harper Lee");
    std::cout << "Author2: " << myBook.getAuthor() << std::endl;

    myBook.setISBN("9780061120084");
    std::cout << "ISBN2: " << myBook.getISBN() << std::endl;
    
    myBook.setPublisher("Harper Perennial Modern Classics");
    std::cout << "Publisher2: " << myBook.getPublisher() << std::endl;
    
    return 0;
}
