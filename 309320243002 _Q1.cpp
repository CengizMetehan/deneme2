#include <iostream>
#include <stack>
using namespace std;

int main() {
    
    stack<int> sayiYigini;

    if (sayiYigini.empty()) {
        cout << "Check stack initial state: empty" << endl;
    }

    cout << "Add elements to stack: 21 - 22 - 24 - 25" << endl;
    sayiYigini.push(21);
    sayiYigini.push(22);
    sayiYigini.push(24);
    sayiYigini.push(25);

    cout << "Show stack element (print first in to last in):" << endl;
    stack<int> geciciYigin = sayiYigini;  
    stack<int> tersYigin;
    while (!geciciYigin.empty()) {
        tersYigin.push(geciciYigin.top());
        geciciYigin.pop();
    }
    while (!tersYigin.empty()) {
        cout << tersYigin.top() << " ";
        tersYigin.pop();
    }
    cout << endl;

    cout << "Show stack element (print last in to first in):" << endl;
    geciciYigin = sayiYigini;  
    while (!geciciYigin.empty()) {
        cout << geciciYigin.top() << " ";
        geciciYigin.pop();
    }
    cout << endl;

    cout << "Delete last two elements from stack then show stack elements (print last in to first in)" << endl;
    sayiYigini.pop();  
    sayiYigini.pop(); 

    geciciYigin = sayiYigini;
    while (!geciciYigin.empty()) {
        cout << geciciYigin.top() << " ";
        geciciYigin.pop();
    }
    cout << endl;

    return 0;
}
