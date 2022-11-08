#include <iostream>

bool valid_table (std::string tictactoe) {
    if (tictactoe.length() != 9 ) return false;
    for (int i = 0; i < 9; i++) {
        if (tictactoe[i] != 'x' && tictactoe[i] != 'o' && tictactoe[i] != '.')
             {
            return false;
        }
    }
    return true;
}

int count_simbols (std::string tictactoe, char smbl )  {
    int count = 0;
    for (int i = 0; i < 9; i++) {
        if (tictactoe[i] == smbl) count++;
    }
   return count;
}

char simbol (std::string tictactoe, int x, int y) {

    return tictactoe[(x+(y-1)*3)-1];

}

int main() {
    std::string line1, line2, line3;
    std::cout << "Input three line:" << std::endl;
    std::cin >> line1;
    std::cin >> line2;
    std::cin >> line3;
    std::string tictactoe = line1 + line2 + line3;
    std::cout<<valid_table(tictactoe)<<"-\n";
    std::cout<<count_simbols(tictactoe,'x')<<"-\n";
    std::cout<<count_simbols(tictactoe,'o')<<"-\n";
    std::cout<<count_simbols(tictactoe,'.')<<"-\n";
   for (int i=1 ; i < 4; i++) {
       for (int j=1; j < 4; j++) {
           std::cout<<simbol(tictactoe,j,i)<<"-";
       }
       std::cout<<"-\n";
   }
    return 0;
}
