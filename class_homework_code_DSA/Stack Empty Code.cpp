#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    if(st.empty()) {
        cout << "Stack is empty";
    }
    else {
        cout << "Stack is not empty";
    }

    return 0;
}
