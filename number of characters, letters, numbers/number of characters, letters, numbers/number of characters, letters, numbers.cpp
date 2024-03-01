#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    string str;
    cout << "Введите строку: ";
    getline(cin, str);

    int letterCount = 0;
    int digitCount = 0;
    int otherCount = 0;

    for (char c : str) 
    {
        if (isalpha(c)) 
        {
            letterCount++;
        }
        else if (isdigit(c)) 
        {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Количество букв: " << letterCount << endl;
    cout << "Количество цифр: " << digitCount << endl;
    cout << "Количество остальных символов: " << otherCount << endl;

    return 0;
}