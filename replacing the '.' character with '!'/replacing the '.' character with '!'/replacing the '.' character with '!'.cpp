#include <iostream>
#include <string>
using namespace std;

int main() 
{
    setlocale(LC_ALL, "ru");
    string str;
    cout << "Введите строку(лучше вводить на ENG, а то результат в труху на русском): ";
    getline(cin, str);

    for (char& c : str) 
    {
        if (c == '.') 
        {
            c = '!';
        }
    }

    cout << "Измененная строка: " << str << endl;

    return 0;
}