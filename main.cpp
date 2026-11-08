#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct AuthLog {
    string username;
    string ip_address;
    bool is_success;
};

bool checkPasswordStrength(const string& password) {
    if (password.length() < 8) return false;
    bool has_upper = false, has_lower = false, has_digit = false;
    for (char ch : password) {
        if (isupper(ch)) has_upper = true;
        if (islower(ch)) has_lower = true;
        if (isdigit(ch)) has_digit = true;
    }
    return has_upper && has_lower && has_digit;
}

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "=== Система IT-Кибербезопасности ===" << endl;

    string password;
    cout << "Введите пароль для проверки: ";
    cin >> password;

    if (checkPasswordStrength(password)) {
        cout << "Пароль надежный." << endl;
    } else {
        cout << "Пароль слабый! Нужны цифры, большие и маленькие буквы, от 8 символов." << endl;
    }
    return 0;
}
