#include <iostream>
#include <cstdlib>
#include <fstream>
#include "linkedlist.h"
#include "node.h"
#include "book.h"

using namespace std;

void loadFromFile(LinkedList<Book>& list);
void insertBackTest(LinkedList<Book>& list);
void traverseTest(LinkedList<Book>& list);
void copyConstructorTest(LinkedList<Book>& list);
void assignmentTest(LinkedList<Book>& list);
void iteratorTest(LinkedList<Book>& list);

int main() {
    LinkedList<Book> list;

	//load book data from file and insert them into list
	loadFromFile(list);

    int choice;

    do {
        cout << "\n===== LINKED LIST TEST MENU =====\n";
		cout << "1. Traverse list\n";
        cout << "2. Insert book at back\n";
        cout << "3. Test copy constructor & eraseFront\n";
        cout << "4. Test assignment operator & eraseBack\n";
        cout << "5. Test iterator (++ operator)\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
				traverseTest(list);
                break;
            case 2:
                insertBackTest(list);
                break;
            case 3:
                copyConstructorTest(list);
                break;
            case 4:
                assignmentTest(list);
                break;
            case 5:
                iteratorTest(list);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 0);

	//the list will free itself using its destructor when program ends sucessfully

    return 0;
}

void loadFromFile(LinkedList<Book>& list) {
    ifstream in("b1.txt");
    Book b;
    string junk;

    if (in.fail()) {
        cout << "File open failed.\n";
        return;
    }

    for (int i = 0; i < 4; i++) {
        in >> b;
        list.insertFront(Node<Book>(b));
    }

    in.close();
    cout << "Loaded 4 books into list (insertFront).\n";
}

void traverseTest(LinkedList<Book>& list) {
    cout << "----------------------------------\n";
    cout << "Traverse list:\n";
    cout << "----------------------------------\n";
    list.traverseAndPrint();
}

void insertBackTest(LinkedList<Book>& list) {
    Book b("123-456", "title", "author", "publisher", 2000, 1);
    list.insertBack(Node<Book>(b));
    cout << "Inserted book at back.\n";
	traverseTest(list);
}

void copyConstructorTest(LinkedList<Book>& list) {
    LinkedList<Book> list2(list);
	
	cout << "Erasing book:" << endl;
	Iterator<Book> it = list.begin();
	cout << (*it).getItem() << endl;
    list2.eraseFront();

    cout << "----------------------------------------\n";
    cout << "Traverse copied list (after eraseFront):\n";
    cout << "----------------------------------------\n";
    list2.traverseAndPrint();
}

void assignmentTest(LinkedList<Book>& list) {
    LinkedList<Book> list2;
    list2 = list;
	cout << "Removing book:" << endl;
	Iterator<Book> it = --list.end();
	cout << (*it).getItem() << endl;
    list2.eraseBack();

    cout << "----------------------------------------\n";
    cout << "Traverse assigned list (after eraseBack):\n";
    cout << "----------------------------------------\n";
    list2.traverseAndPrint();
}

void iteratorTest(LinkedList<Book>& list) {
    cout << "----------------------------------\n";
    cout << "Iterator traversal:\n";
    cout << "----------------------------------\n";

    Iterator<Book> it = list.begin();
    for (; it != list.end(); ++it) {
        cout << (*it).getItem() << endl;
    }
}
