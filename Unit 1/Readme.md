

# Experiment 1

#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    float marks1, marks2, marks3;
    float total, percentage;

public:
    void getDetails() {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;

        cout << "Enter marks in Subject 1: ";
        cin >> marks1;

        cout << "Enter marks in Subject 2: ";
        cin >> marks2;

        cout << "Enter marks in Subject 3: ";
        cin >> marks3;
    }

    void calculateResult() {
        total = marks1 + marks2 + marks3;
        percentage = total / 3;
    }

    void displayResult() {
        cout << "\n----- Student Result -----\n";
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << rollNo << endl;
        cout << "Total Marks: " << total << "/300" << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if (percentage >= 75)
            cout << "Grade      : A" << endl;
        else if (percentage >= 60)
            cout << "Grade      : B" << endl;
        else if (percentage >= 50)
            cout << "Grade      : C" << endl;
        else if (percentage >= 35)
            cout << "Grade      : D" << endl;
        else
            cout << "Result     : FAIL" << endl;
    }
};

int main() {
    Student s;

    s.getDetails();
    s.calculateResult();
    s.displayResult();

    return 0;
}


# Experiment 2


#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:
    void getData()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void area()
    {
        cout << "Area = " << length * breadth << endl;
    }

    void perimeter()
    {
        cout << "Perimeter = " << 2 * (length + breadth) << endl;
    }
};

int main()
{
    Rectangle r;

    r.getData();
    r.area();
    r.perimeter();

    return 0;
}


# Experiment 3


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



