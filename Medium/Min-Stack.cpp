#include <iostream>
#include <stack>
using namespace std;

class MinStack {
    stack<int> mainSt;
    stack<int> minSt;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        mainSt.push(val);
        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }
    
    void pop() {
        if (mainSt.top() == minSt.top()) {
            minSt.pop();
        }
        mainSt.pop();
    }
    
    int top() {
        return mainSt.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};

int main() {
    MinStack minStack;
    minStack.push(5);
    minStack.push(3);
    minStack.push(7);
    cout << "Minimum: " << minStack.getMin() << endl; // Output: 3
    minStack.pop();
    cout << "Top: " << minStack.top() << endl;       // Output: 3
    cout << "Minimum: " << minStack.getMin() << endl; // Output: 3
    return 0;
}