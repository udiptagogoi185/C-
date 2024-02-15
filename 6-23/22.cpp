#include <iostream>
using namespace std;

class Book {
    public: 
        string title;
        string author;
        int pages;

            Book() {
                title = "no title";
                author = "no author";
                pages = 0;
            }

            Book(string Title, string Author, int Pages) {
                title = Title;
                author = Author;
                pages = Pages;

            }
};
int main ()
{
    Book book1 ("Ashimat Jar Heral Seema", "Kanchan Baruah", 500);

    Book book2 ("Puwoti Tora", "Kanchan Baruah", 300);
    
    Book book3;

    cout << book2.author << endl;
    cout << book1.title << endl;
    cout << book3.author;
    
    return 0;
}