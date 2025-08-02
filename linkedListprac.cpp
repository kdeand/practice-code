#include <iostream>
#include <string>


//just a simple task list
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
void sortStudents();

int main() {


    int choice;
    cout << "Welcome to Task Maker!" << endl;
    cout << "Please choose below: " << endl;

    string arrmenu[5] = {"Add Student", "Delete Student", "View Student", "Sort Student", "Exit"};
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << arrmenu[i] << endl;
    }
    cout << "Your choice: " << choice;
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
            sortStudent();
            break;  
            
        case 5:
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
        while (temp-> next != NULL) {
            temp = temp->next;
        }
        temp-> next = newNode;
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

    if (head -> studNum == searchId) {
        
    }
 }

 void viewStudent() {

 }

 void sortStudent(){
 }