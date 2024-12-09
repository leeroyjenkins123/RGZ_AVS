#include <iostream>
#include <thread>
#include <chrono>  // Для задержки
using namespace std;

int main() {
    cout << "Hello world!" << endl;

    // Ожидание ввода пользователя с помощью цикла
    cout << "Press any key to exit..." << endl;

    // Бесконечный цикл, ожидающий вручную завершения
    while (true) {
        this_thread::sleep_for(chrono::seconds(1)); // Задержка 1 секунда
    }

    return 0;
}
