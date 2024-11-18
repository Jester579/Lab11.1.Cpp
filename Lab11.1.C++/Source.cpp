//C:\Users\User\source\repos\Lab11.1.C\tt.txt
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int CountCommaDashPairs(const string& fname) {
    ifstream fin(fname);
    if (!fin.is_open()) {
        cerr << "�� ������� �i������ ����! �����i��� i�'� ����� ��� ���� �i��������������." << endl;
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
                cout << "�������� ',-' � ����� " << line_number << ", �����i� " << i + 1 << endl;
            }
        }
    }

    fin.close();
    return count;
}

int main() {
    setlocale(LC_ALL, "ukr");
    string fname;

    cout << "����i�� i�'� ���������� �����: ";
    cin >> fname;

    int count = CountCommaDashPairs(fname);
    if (count > 0) {
        cout << "\n�������� �i���i��� ��� ',-': " << count << endl;
    }
    else {
        cout << "\n���� ',-' �� ��������." << endl;
    }

    return 0;
}
