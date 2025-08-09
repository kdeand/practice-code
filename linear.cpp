#include <iostream>
using namespace std;

//for linear search, set a function of the algorithm passing the array/list, the size of the array and the key

int Search(int arr[], int size, int key) {
    //set the loop for iteration
    //return   -1 if not found

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }

        return -1;
    }
}

int main() {

    //initialize the needed variables, arr, size, and the key from the user

    int arr[5] = {1,2,3,4,5};
    int size = 5; 
    int key;

    cout << "Enter number to search: "; 
    cin >> key;
    
    //call the function for searching the size; 
    int result = Search(arr,size,key);

    if(result != -1) {
        cout << "Found at index: " << result << endl;

    } else {
        cout << "Not found!" << endl;
    }

    return 0;

}