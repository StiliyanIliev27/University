#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ќсигур€ва правилно изобраз€ване на кирилица

    ofstream двоичен‘айл("данни.bin", ios::binary);
    if (двоичен‘айл.is_open()) {
        int число = 12345;
        двоичен‘айл.write(reinterpret_cast<char*>(&число), sizeof(число));
        двоичен‘айл.close();
        cout << "ƒанните са записани в двоичен файл." << endl;
    }
    else {
        cout << "Ќеуспешно отвар€не на файла." << endl;
    }

    return 0;
}
