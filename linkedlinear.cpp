#include <iostream>
#include <string>
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

    do {
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
   
} while (choice !=4 );
 return 0;
}

void addStudent() {


    Node* newNode = new Node;
    cin.ignore();
    cout << "Enter name: "; getline(cin,newNode->Name) ;
    cout << "Enter student number: "; cin >> newNode-> studentNum;
    newNode -> next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp -> next != NULL) {
            temp = temp->next;
        } temp -> next = newNode;
    }

    cout << "Student added successfully!" << endl;
}

void deleteStudent() {
    
    int searchId;
    cout << "Enter student ID to delete: "; 
    cin >> searchId;

    if (head ==NULL) {
        cout << "List is empty." << endl;
        return; 
    }

    if (head -> studentNum == searchId) {
        Node* temp = head;
        temp->next = head;
        delete temp;
        cout << "Student deleted successfully!";
        return;
    }

    Node* prev = head; Node* current = head -> next; //these two are two nodes next to each other

    while (current != NULL && current -> studentNum != searchId) {
        prev = current;
        current = current->next; 
    }

    if (current == NULL) {
        cout << "Student not found!" << endl;
        return; 
    }

    prev -> next = current -> next;
    delete current;
    cout << "Student deleted successfully!" << endl;  
}


 void viewList() {

    //check if nodes exist
    if(head == NULL)  {
        cout << "No students in the list.";
        return;
    }

    //just traverse and print
    //remember that the while loop is used for the traversal
    Node* temp = head;
    while (temp != NULL) {
        cout << "Student Number: " << temp->studentNum << endl;
        cout << "First Name: " << temp->Name<< endl;
        cout << "------------------------" << endl;
        temp = temp->next;
    }
 }
