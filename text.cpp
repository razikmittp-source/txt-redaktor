#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    cout << "Текстовый редактор! " << endl;
    cout << "Version 1.1" << endl;
    cout << "Хочешь ли ты его открыть? (Да/нет)" << endl;
    
    string yesno;
    cin >> yesno;
    
    if (yesno == "Да" || yesno == "да") {
        cout << "Хорошо! " << endl;
    }
    else if (yesno == "Нет" || yesno == "нет") {
        cout << "Всего доброго!" << endl;
        return 1;
    }
    else {
        cout << "Не понял" << endl;
        return 1;
    }
    while (true) {
        cout << "\n=== Меню ===" << endl;
        cout << "1. Создать/Перезаписать файл" << endl;
        cout << "2. Прочитать файл" << endl;
        cout << "3. Выйти" << endl;
        cout << "Твой выбор: ";
        
        int holu;
        cin >> holu;

    
        if (holu == 1) {
            cin.ignore(); 
            cout << "введи текст который хочешь записать в файл: " << endl;
            string text;
            getline(cin, text);
            
            ofstream file("text.txt");
            if (file.is_open()) {
                file << text << endl;
                file.close();
                cout << "OK Текст записан в файл text.txt!" << endl;
            } else {
                cout << "ERROR Не могу открыть файл для записи!" << endl;
            }
        }
        else if (holu == 2) {
            ifstream file("text.txt");
            if (file.is_open()) {
                cout << "Содержимое text.txt" << endl;
                string line;
                while (getline(file, line)) {
                    cout << line << endl;
                }
                file.close();
                cout << "Конец файлa" << endl;
            } else {
                cout << "ERROR Файл text.txt не найдеn Сначала создайте его" << endl;
            }
        }
 
        else if (holu == 3) {
            cout << "Пока, бро!" << endl;
            break; // 
        }
       
        else {
            cout << "Не понял, выбери 1, 2 или 3." << endl;
        }
    }

    return 0;
}
