#include <iostream>
#include <string>


//just a simple task list
using namespace std;

struct Node {
    string task; 
    Node* next;
};



void addTask();
void delTask();
void viewTask();
void sortTask();

int main() {

    int choice;
    cout << "Welcome to Task Maker!" << endl;
    cout << "Please choose below: " << endl;

    string arrmenu[5] = {"Add Task", "Delete Task", "View Task", "Sort Task", "Exit"}, ;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ". " << arrmenu[i] << endl;
    }

    switch(choice) {
        case 1: 
            addTask();
            break;
        case 2:      
            delTask();
            break;
        case 3: 
            viewTask();
            break;
        case 4:
            sortTask();
            break;  
            
        case 5:
            cout << "Exiting the program." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }
}
 void addTask() {


 }

 void delTask(){

 }

 void viewTask() {

 }

 void sortTask(){
 }