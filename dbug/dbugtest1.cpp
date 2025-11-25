//USE THE FOLLOWING CODE TO EXPLORE THE DEBUGGER
#include <iostream>
using namespace std;

// Function to add two numbers
int addNumbers(int a, int b) {
    return a + b; // Watch the return value during debugging
}

int main() {
    // Inspect how the message is built step by step
    char letters[] = {'W','E','L','C','O','M','E'};
    string message = "";
    // Set a breakpoint inside the loop to watch 'message' grow
    for(int i = 0; i < 7; i++){
        message += letters[i]; // Watch 'message' after each iteration
    }
    cout << message << endl; // Check final message output

    int x = 5;
    int y = 10;
    // Set a breakpoint here and step into 'addNumbers'
    int sum = addNumbers(x, y);
    cout << "Sum: " << sum << endl; // Verify correct sum

    // Intentional bug: dividing by zero
    int divisor = 0;
    // Set a breakpoint here to inspect before the crash
    int result = sum / divisor; // This will cause a runtime error
    
    cout << "Result: " << result << endl;

    return 0;
}