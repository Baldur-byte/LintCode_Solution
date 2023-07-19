#include <iostream>
#include <vector>

using namespace std;

class Stack {
public:
    /*
    * @param x: An integer
    * @return: nothing
    */
    void push(int x) {
        // write your code here
        topIndex++;
        if (stack.size() > topIndex)
        {
            stack[topIndex] = x;
        }
        else
        {
            stack.push_back(x);
        }
    }

    /*
    * @return: nothing
    */
    void pop() {
        // write your code here
        topIndex--;
    }

    /*
    * @return: An integer
    */
    int top() {
        // write your code here
        return stack[topIndex];
    }

    /*
    * @return: True if the stack is empty
    */
    bool isEmpty() {
        // write your code here
        return this->topIndex == -1;
    }
private:
    int topIndex = -1;
    vector<int> stack;
};