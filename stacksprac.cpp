#include <iostream>
#include <stack> //always include this
using namespace std;

void printStack(stack<int> stack) {

    while (!stack.empty()) {
        cout << stack.top() << endl;
        stack.pop();
        
    }
}
int main() {

    //empty, size, push, pop, top
    stack<int> numberStack;
    numberStack.push(1);
    numberStack.push(2);


   /* if (numberStack.empty()) {
        cout << "Stack is empty.";
    } else {
        cout << "\nStack is not empty.";
    }
        cout << "\nStack size is: " << numberStack.size();
    return 0;
    */

    printStack(numberStack);
}