#include <iostream>
using namespace std;

#define SIZE 5
template <class T>
class Stack {
private:
    int top;
    T st[SIZE];

public:
    Stack() : top(-1) {}

    void push(T element)
     {
        if (top == SIZE - 1) {
            cout << "Stack is full" << element << endl;
            return;
        }
        st[++top] = element;
        cout << "Pushed element " << element << endl;
    }


    void displayTop() const 
    {
        if (top == -1) {
            cout << "Stack is empty. No top element." << endl;
            return;
        }
        cout << "Top element: " << st[top] << endl;
    }

    void displayReverse() const
     {
        cout << "Reversed elements: ";
        for (int i = top; i >= 0; --i) {
            cout << st[i] << " ";
        }
        cout << endl;
    }

    bool isEmpty() const
     {
        return top == -1;
    }

    bool isFull() const
    {
        return top == SIZE - 1;
    }
};

int main() {
    Stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    myStack.displayTop();

    myStack.displayReverse();

    return 0;
}