/*���� �������� ������. ������� ���� �� ������� � ���������� �������. */
#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    string s;
    getline(cin, s);
    if (s.empty()) {
        cerr << "������ ������ �� ������ ���� ������" << endl;
    }
    cout << int(s[0]) << endl;
    cout << int(s[s.size()]);
    return 0;
}