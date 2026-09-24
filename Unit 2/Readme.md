# Experiment 1

#include <iostream>
using namespace std;

class Product
{
    int id;
    string name;
    float price;

public:
    void getData()
    {
        cout << "Enter Product ID: ";
        cin >> id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Product Price: ";
        cin >> price;
    }

    void display()
    {
        cout << id << "\t" << name << "\t" << price << endl;
    }
};

int main()
{
    Product p[3];   // Array of 3 Product objects

    cout << "Enter details of 3 products:\n";

    for(int i = 0; i < 3; i++)
    {
        cout << "\nProduct " << i + 1 << endl;
        p[i].getData();
    }

    cout << "\n--- Product Details ---\n";
    cout << "ID\tName\tPrice\n";

    for(int i = 0; i < 3; i++)
    {
        p[i].display();
    }

    return 0;
}


# Experiment 2

#include <iostream>
using namespace std;

class Book
{
    int bookId;
    string title;

public:
    // Parameterized constructor
    Book(int id, string t)
    {
        bookId = id;
        title = t;
    }

    // Copy constructor
    Book(const Book &b)
    {
        bookId = b.bookId;
        title = b.title;
    }

    void display()
    {
        cout << "Book ID: " << bookId << endl;
        cout << "Title: " << title << endl;
    }
};

int main()
{
    Book b1(101, "C++ Programming");

    // Copy constructor called
    Book b2 = b1;

    cout << "Original Book:\n";
    b1.display();

    cout << "\nCopied Book:\n";
    b2.display();

    return 0;
}

