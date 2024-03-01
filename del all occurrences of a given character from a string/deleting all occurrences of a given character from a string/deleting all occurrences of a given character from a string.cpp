#include <iostream>
#include <string>
using namespace std;

string removeCharacter(const string& str, char ch) 
{
    string result = str;

    for (int i = 0; i < result.length(); i++) 
    {
        if (result[i] == ch) 
        {
            result.erase(i, 1);
            i--;
        }
    }

    return result;
}

int main()
{
    setlocale(LC_ALL, "ru");
    string str = "Пример строки для удаления символов";
    char ch = 'и'; // тут изменять то, что нужно удалить из строки выше

    cout << "Исходная строка: " << str << endl;

    string modifiedStr = removeCharacter(str, ch);
    cout << "Строка после удаления символа '" << ch << "': " << modifiedStr << endl;

    return 0;
}