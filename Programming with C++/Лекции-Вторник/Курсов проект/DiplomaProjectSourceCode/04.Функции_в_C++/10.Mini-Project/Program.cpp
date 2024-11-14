#include <iostream>
using namespace std;

void поздрави() {
    cout << "Здравейте! Добре дошли в програмирането с C++!" << endl;
}

int main() {
    system("chcp 1251 > nul"); // Осигурява правилно изобразяване на кирилица

    поздрави(); // Извикване на функцията
    return 0;
}