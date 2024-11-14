#include <iostream>
#include <fstream>
using namespace std;

int main() {
    system("chcp 1251 > nul"); // ќсигур€ва правилно изобраз€ване на кирилица

    ifstream двоичен‘айл("../29.Mini-Project/данни.bin", ios::binary);
    if (двоичен‘айл.is_open()) {
        int число;
        двоичен‘айл.read(reinterpret_cast<char*>(&число), sizeof(число));
        двоичен‘айл.close();
        cout << "ѕрочетеното число е: " << число << endl;
    }
    else {
        cout << "Ќеуспешно отвар€не на файла." << endl;
    }

    return 0;
}
