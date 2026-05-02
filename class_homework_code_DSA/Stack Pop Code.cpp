#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.pop(); // top element remove

    cout << "Top removed";

    return 0;
}
