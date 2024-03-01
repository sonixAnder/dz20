#include <iostream>
#include <string>
using namespace std;

int countSymbol(const std::string& str, char symbol) 
{
    int count = 0;
    for (char c : str) 
    {
        if (c == symbol) 
        {
            count++;
        }
    }
    return count;
}

int main() 
{
    setlocale(LC_ALL, "ru");
    string str;
    char symbol;

    cout << "Введите строку: ";
    getline(cin, str);

    cout << "Введите искомый символ: ";
    cin >> symbol;

    int count = countSymbol(str, symbol);

    cout << "Выбранный вами символ встречается " << count << " раз(а) в строке." << endl;

    return 0;
}