#include <iostream>
using namespace std;

//this is a program using linkedlist as well as sequential search. 
//the key in this program would be the student number input by the user. 
//will remake the entire linked list program

struct Node {
    string Name; 
    int studentNum;
    Node* next;
};

Node* n;
Node* head = NULL;

void addStudent();
void deleteStudent();
void viewList();

int main() {

    int choice;

    cout << "Welcome to Student List Program!";
    cout <<"\n==== M E N U ====\n";
    
    string arrChoice[4] = {"1. Add Student", "2. Delete Student", "3. View List", "4. Exit"};
    for ( int i = 0; i < 4; i++) {
        cout << arrChoice[i] << endl;
    }
    cout << "Enter your choice: "; 
    cin >> choice;

    switch(choice) {
        case 1: 
            addStudent();
            break;
        case 2: 
            deleteStudent();
            break;
        case 3:
            viewList();
            break;
        case 4:
            cout << "Exiting program." << endl;
            break;
        default: 
            cout << "Invalid choice. Please try again." << endl;
            break;
    }
    return 0;
}

void addStudent() {


    Node* newNode = new Node;

    cout << "Enter name: "; cin >> n->Name;
    cout << "Enter student number: "; cin >> n-> studentNum;
    newNode -> next = NULL;

    if (head != NULL) {
        head = newNode;
    } else {
        Node* temp;

        
        while (temp -> next != NULL) {
            temp = temp->next;
        } temp -> next = newNode;
    }

    cout << "Student added successfully!" << endl;
}