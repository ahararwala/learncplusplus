#include "header_lesson2.h"

int prefix_postfix() {
    int a, b = 0;
    int post, pre = 0;
    cout << "Inital values: \t\t\tpost = " << post << " pre= " << pre << "\n";
    post = a++;
    pre = ++b;
    cout << "After one postfix and prefix: \t post = " << post << " pre= " << pre << "\n";
    post = a++;
    pre = ++b;
    cout << "After two postfix and prefix: \t post = " << post << " pre= " << pre << "\n";
    return 0;
}