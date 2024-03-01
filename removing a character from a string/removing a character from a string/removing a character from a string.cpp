#include <iostream>
#include <string>
using namespace std;

string removeCharacter(const string& str, int index) 
{
    if (index < 0 || index >= str.length()) 
    {
        cout << "Неверный индекс!" << endl;
        return str;
    }

    string result = str;
    result.erase(index, 1);

    return result;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    string str = "Пример строки";
    int index = 4;

    cout << "Исходная строка: " << str << endl;

    string modifiedStr = removeCharacter(str, index);
    cout << "Строка после удаления символа с индексом " << index << ": " << modifiedStr << endl;

    return 0;
}