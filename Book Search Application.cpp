#include <iostream>
#include <vector>
#include <string>
#include <limits>
using namespace std;

string again = "Yes";

int linearBookSearch(const vector<string>& array, const string& b)
{
    for (size_t i = 0; i < array.size(); ++i)
    {
        if (array[i] == b)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<string> books = { "Beyond Good And Evil", "The Brothers Karamazov", "Don Quixote", "War And Peace", "The Odyssey", "The Undiscovered Self", "The Decline Of The West", "The Great Gatsby", "Great Expectations", "Hamlet" };
    string b;
    int returned;
    returned = linearBookSearch(books, b);
    cout << "\t*** Book Search Application ***\n\n";
    cout << "Hello and welcome to the Book Search Application.\n";
    cout << "With this application you can search for a book in\nour library.\n";
    while (again == "yes" || again == "Yes")
    {
        cout << "\nPlease enter the full name of a book\nbellow to see if we have that book.";
        cout << "If we do have\nthe book we will tell you what row the book is in\nin the library.\n";
        getline(cin, b);
        returned = linearBookSearch(books, b);
        if (returned == -1)
        {
            cout << "\nSorry, this book isn't in our library.\nWould you like to search for another?";
            cout << "\n(Please enter Yes or No)\n";
            getline(cin, again);
        }
        else
        {
            cout << "\nYes, we do have that book. That book is on row " << returned + 1 << ".";
            cout << "\n\nWould you like to search for another book?\n(Please enter Yes or No)\n";
            getline(cin, again);
        }
    }
}
