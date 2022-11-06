#include <iostream>

bool valid_table (std::string line1, std::string line2, std::string line3) {
    if (line1.length() != 3 && line2.length() != 3 && line3.length() !=3 ) return false;
    for (int i = 0; i < 2; i++) {
        if (line1[i] != 'x' && line1[i] != 'o' && line1[i] != '.'
            || line2[i] != 'x' && line2[i] != 'o' && line2[i] != '.'
            || line3[i] != 'x' && line3[i] != 'o' && line3[i] != '.') {
            return false;
        }
    }
    return true;
}
int main() {
    std::string line1, line2, line3;
    std::cout << "Input three line:" << std::endl;
    std::cin >> line1;
    std::cin >> line2;
    std::cin >> line3;
    std::cout<<valid_table(line1,line2,line3);
    return 0;
}
