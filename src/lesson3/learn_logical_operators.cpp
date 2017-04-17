#include "header_lesson3.h"

/*Goal: understand the logical operators supported by C++
*/
int logical_operators() {
    int A = 5;
    int B = 4;
    int C = 5;
    int D = 0;

    std::string TorF[] = {"False", "True"};

    //The && operator
    std::cout << "A == C is " << TorF[A == C];
    std::cout << "\n(B == D) is " << TorF[B == D];
    std::cout << "\n(B > D) is " << TorF[B > D];
    //A true && false = false
    std::cout << "\n\n(A ==C) && (B == D) is " << TorF[(A == C) && (B == D)];
    //A true and true = true
    std::cout << "\n(A ==C) && (B > D) is " << TorF[(A == C) && (B > D)];

    //The || operator
    //A true || false = true
    std::cout << "\n\n(A ==C) || (B == D) is " << TorF[(A == C) || (B == D)];
    //A true || true = true
    std::cout << "\n(A ==C) || (B > D) is " << TorF[(A == C) || (B > D)];

    //The 'Not' operator
    std::cout << "\n\nA < B is " << TorF[A < B];
    std::cout << "\n!(A < B) is " << TorF[!(A < B)];

    std::cout << "\n\nA == C is " << TorF[A == C];
    std::cout << "\n!(A == C) is " << TorF[!(A == C)];

    return 0;
}

/*Goal: use logical and relational operators in a C++ program.
**Find all possible outputs for the given expression
**Hint: there are three inputs, so there are 8 possible input combinations (2^3)
**Which means there is an output for each combination of inputs.
**The expression: (A and B and C) or (A and( (not B) or (not C))) = Q
*/
int logical_and_relational_operators()
{
    //(A and B and C) or (A and( (not B) or (not C))) = Q
    int A = 0;
    int B = 0;
    int C = 0;
    int Q;
    Q = (A && B && C) || (A && (!B || !C));

    std::cout<<"A\tB\tC\t(A && B && C)\t\t(!B||!C)\t(A&&(!B||!C))\tQ\n";
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 0;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 0;
    B = 1;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    C = 1;
    B = 1;
    A = 1;
    Q = (A && B && C) || (A && (!B || !C));
    std::cout<<A<<"\t"<<B<<"\t"<<C<<"\t\t"<<(A && B && C)<<"\t\t"<<(!B||!C)<<"\t\t"<<(A&&(!B||!C))<<"\t\t"<<Q<<"\n";

    return 0;
}