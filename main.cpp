#include <iostream>
#include <cstdlib>  // Для system("pause")
using namespace std;

int main() {
    cout << "Hello world!" << endl;

    // Ожидание ввода пользователя
    cout << "Press any key to exit..." << endl;

    // Используем system("pause") для Windows или getchar() для Linux
    #if defined(_WIN32) || defined(_WIN64)
        system("pause");  // Ожидает нажатия клавиши в Windows
    #else
        getchar();  // Ожидает ввода в Linux/Unix системах
    #endif

    return 0;
}
