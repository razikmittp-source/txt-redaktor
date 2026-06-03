#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main () {
setlocale(LC_ALL, "RU");

cout << "Текстовый редактор! " << endl;
cout << "Version 1.0" << endl;
cout << "Хочешь ли ты его открыть? (Да/нет)" << endl;
string yesno;
cin >> yesno;
if(yesno == "Да" || yesno == "да") {
    cout << "Хорошо! " << endl;
}
else if(yesno == "Нет" || yesno == "нет") {
    cout << "Всего доброго!" << endl;
    return 1;
}
else {
    cout << "Не понял" << endl;
    return 1;
}
cout << "Вас приветствует текстовый редактор!" << endl;
cout << "Меню: " << endl;
cout << "1. создать файл " << endl;
cout << "2. прочитать свой файл" << endl;
cout << "3. выйти с программы" << endl;
int holu = 0;
cin >> holu;
if(holu == 1) {
cout << "Введите что вы хотите написать в файл " << endl;
string name;
cin >> name;
ofstream file("text.txt", ios_base::out);
if(file.is_open()) {
file << name << endl;
ifstream file("test.txt");
char temp[100];
file.getline(temp, 100);
cout << "было записано в файл: ";
cout << temp << endl;
file.close();
}
}
else if (holu == 2) {
cout << "В этой версии это пока что не доступно" << endl;
return 1;
}
else if(holu == 3) {
cout << "Пока!" << endl;
return 1;
}
else {
    cout << "не понятно" << endl;
    return 1;
}
return 0;
}