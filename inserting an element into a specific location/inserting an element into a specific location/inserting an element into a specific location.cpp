#include <iostream>
#include <string>
using namespace std;

string insertCharacter(const string& str, char ch, int position) 
{
    string result = str;

    if (position >= 0 && position <= result.length())
    {
        result.insert(position, 1, ch);
    }

    return result;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    string str = "Пример строки для вставки символа";
    char ch = 'X'; // буква, которую нужно добавить
    int position = 10; // позиция (по индексу)

    cout << "Исходная строка: " << str << endl;

    string modifiedStr = insertCharacter(str, ch, position);
    cout << "Строка после вставки символа '" << ch << "' в позицию " << position << ": " << modifiedStr << endl;

    return 0;
}