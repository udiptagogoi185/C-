#include <iostream>
using namespace std;

class Book {
    public: 
        string title;
        string author;
        int pages;
};
int main ()
{
    Book book1;
    book1.title = "Ashimat Jar Heral Seema";
    book1.author = "Kanchan Baruah";
    book1.pages = 500;

    Book book2;
    book2.title = "Puwoti Tora";
    book2.author = "Kanchan Baruah";
    book2.pages = 300;

    cout << book2.author << endl;
    cout << book1.title;

    return 0;
}