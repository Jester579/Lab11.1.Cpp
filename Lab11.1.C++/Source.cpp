//C:\Users\User\source\repos\Lab11.1.C\tt.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int CountCommaDashPairs(const string& fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        cerr << "Не вдалося вiдкрити файл! Перевiрте iм'я файлу або його мiсцезнаходження." << endl;
        return 0;
    }

    string line;
    int count = 0;
    int line_number = 0;

    while (getline(fin, line)) {
        line_number++;
        for (size_t i = 0; i < line.length() - 1; i++) {
            if (line[i] == ',' && line[i + 1] == '-') {
                count++;
                cout << "Знайдено ',-' у рядку " << line_number << ", позицiя " << i + 1 << endl;
            }
        }
    }

    fin.close();
    return count;
}

int main() {
    setlocale(LC_ALL, "ukr");
    string fname;

    cout << "Введiть iм'я текстового файлу: ";
    cin >> fname;

    int count = CountCommaDashPairs(fname);
    if (count > 0) {
        cout << "\nЗагальна кiлькiсть пар ',-': " << count << endl;
    }
    else {
        cout << "\nПари ',-' не знайдено." << endl;
    }

    return 0;
}
