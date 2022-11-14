#include <iostream>
#include <string>;
#include <Windows.h>
#include <stdio.h>
class Counter {
    
private:
    int count;
public:
    Counter(int count) {
        this->count = count;
    }
    Counter() {
        count = 1;
    }
    void plus() {
        ++count;
    }
    void minus() {
        --count;
    }
    int show() {
        return count;
    }
    
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Counter counter;
    std::string str;
    int n = 0;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> str;
    if (str == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> n;
        counter =  Counter(n);
    }
    else {
        counter = Counter();
    }
    while (str != "x") {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> str;
        if (str == "+") counter.plus();
        if (str == "-") counter.minus();
        if (str == "=") std::cout << counter.show() << "\n";
    }
}