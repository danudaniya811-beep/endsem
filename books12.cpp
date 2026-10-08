#include <iostream>
using namespace std;

class Book
{
    string title, author;

public:
    Book(string t, string a)
    {
        title = t;
        author = a;
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

int main()
{
    string t1, a1, t2, a2;

    cout << "Enter first book title: ";
    cin >> t1;
    cout << "Enter first book author: ";
    cin >> a1;

    cout << "Enter second book title: ";
    cin >> t2;
    cout << "Enter second book author: ";
    cin >> a2;

    Book b1(t1, a1);
    Book b2(t2, a2);

    cout << "\nBook 1:\n";
    b1.display();

    cout << "\nBook 2:\n";
    b2.display();

    return 0;
}
