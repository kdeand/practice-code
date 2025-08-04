#include <iostream>
#include <string>


//just a simple delete and add list

using namespace std;

struct Node {
    int studNum;
    string lastName;
    string firstName;
    string course;
    Node* next;
};

Node* n;
Node* head = NULL;

void addStudent();
void delStudent();
void viewStudent();

int main() {


    int choice;
    cout << "Welcome to Task Maker!" << endl;
    cout << "Please choose below: " << endl;

    string arrmenu[4] = {"Add Student", "Delete Student", "View Student", "Exit"};
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << arrmenu[i] << endl;
    }
    
    cout << "Your choice: ";
    cin >> choice;
    switch(choice) { 

        case 1:
            
            addStudent();
            break;
        case 2:      
            delStudent();
            break;
        case 3: 
            viewStudent();
            break;
        case 4:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}
 void addStudent() {

    Node* newNode = new Node; //set new node
    cout << "== Enter Student Details ==" << endl;
            cin >> n->studNum;
            cout << "First Name: ";
            cin >> n-> firstName;
            cout << "Last Name: ";
            cin >> n -> lastName;
            cout << "Course: ";
            cin >> n-> course;
    newNode -> next = NULL; //stop node

    //placing the node

    //if head is empty, head is the newly added node
    //if not, while the head -> next is not empty, head is the next node;
    //then head -> next is the newNode;
    if (head == NULL) {
        head = newNode;
    } else { 
        Node* temp;
        //the while loop is used to traverse the list
        while (temp-> next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode; 
    }
    cout << "Student added successfully!" << endl; 
 }

 void delStudent(){
    int searchId;
    cout << "Enter student ID to delete: ";
    cin >> searchId;
 
    //check if nodes are empty
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    //if the head is the node to be deleted

    if (head -> studNum == searchId) {
        Node* temp = head; //setting up the node to delete
        head = head -> next; //moving the pointer
        delete temp; //the node deleted;
        cout << "Student deleted successfully!";
        return;
    }

    Node* prev = head; // set previous to head
    Node * current = head -> next; //set the next node to the next node of prev/head 

    //while current is not empty and the searchId is not in current node, previous is current and current is the next node of prev
    //this while loop is for traversing the list 
    while(current != NULL && current->studNum != searchId ) {
        prev = current;
        current = current->next;
    }

//if current is empty, student is not found
    if (current == NULL) {
        cout << "Student not found!" << endl;
        return;
    }

    //apparently removes the current node from the linked list so the current node can be deleted
    //the "prev" node next points to the current node's next node which skips the current node to be deleted
    //this way, the list doesn't break when current is deleted 
    prev->next = current-> next; 
    delete current;
    cout << "Student deleted successfully!" << endl;
    }
    
 void viewStudent() {

    //check if nodes exist
    if(head == NULL)  {
        cout << "No students in the list.";
        return;
    }

    //just traverse and print
    //remember that the while loop is used for the traversal
    Node* temp = head;
    while (temp != NULL) {
        cout << "Student Number: " << temp->studNum << endl;
        cout << "First Name: " << temp->firstName << endl;
        cout << "Last Name: " << temp->lastName << endl;
        cout << "Course: " << temp->course << endl;
        cout << "------------------------" << endl;
        temp = temp->next;
    }
 }
