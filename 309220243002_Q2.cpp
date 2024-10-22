#include <iostream>
#include <stack>
using namespace std;

void yiginSirala(stack<int>& orijinalYigin) {
    stack<int> geciciYigin;  

    while (!orijinalYigin.empty()) {
        int mevcutEleman = orijinalYigin.top();
        orijinalYigin.pop();

        while (!geciciYigin.empty() && geciciYigin.top() > mevcutEleman) {
            orijinalYigin.push(geciciYigin.top());
            geciciYigin.pop();
        }

        geciciYigin.push(mevcutEleman);
    }

    while (!geciciYigin.empty()) {
        orijinalYigin.push(geciciYigin.top());
        geciciYigin.pop();
    }
}

void yiginYazdir(stack<int> yigin) {
    while (!yigin.empty()) {
        cout << yigin.top() << " ";
        yigin.pop();
    }
    cout << endl;
}

int main() {
    stack<int> sayiYigini;

    sayiYigini.push(34);
    sayiYigini.push(3);
    sayiYigini.push(31);
    sayiYigini.push(98);
    sayiYigini.push(92);
    sayiYigini.push(23);

    cout << "orjinal yigin:" << endl;
    yiginYazdir(sayiYigini);

    yiginSirala(sayiYigini);

    cout << "Sirali yigin:" << endl;
    yiginYazdir(sayiYigini);

    return 0;
}
