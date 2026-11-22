#include <iostream>
using namespace std;

class Book
{
public:
int bookId;
string title, author;
float price;

void accept()
{
cout << "Enter Book ID, Title, Author, Price: ";
cin >>bookId >> title >> author >> price;

}

void display()
{
cout << "Book ID: " << bookId << endl;
cout << "Title: " << title << endl;
cout << "Author: " << author << endl;
cout << "Price: " << price << endl;
}
};

int main()
{
Book b;
b.accept();
b.display();
return 0;
}
