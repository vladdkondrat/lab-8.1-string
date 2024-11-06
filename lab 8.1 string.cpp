#include <iostream>
#include <string>
using namespace std;

// Функція для підрахунку груп з трьох знаків оклику "!!!"
bool ContainsTripleExclamationCpp(const string& str) {
    return str.find("!!!") != string::npos;
}

// Функція для заміни трійок знаків оклику "!!!" на "**"
void ReplaceTripleExclamationCpp(string& str) {
    size_t pos = 0;
    while ((pos = str.find("!!!", pos)) != string::npos) {
        str.replace(pos, 3, "**");
        pos += 2; // Зсунути на дві позиції далі, щоб уникнути повторної перевірки
    }
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    // Перевірка, чи містить рядок групу з трьох знаків оклику "!!!"
    bool containsTripleExclamation = ContainsTripleExclamationCpp(str);
    cout << "Contains triple exclamation: " << (containsTripleExclamation ? "Yes" : "No") << endl;

    // Заміна трійок знаків оклику "!!!" на "**"
    ReplaceTripleExclamationCpp(str);
    cout << "Modified string: " << str << endl;

    return 0;
}
