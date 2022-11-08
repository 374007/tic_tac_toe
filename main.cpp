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

bool win (std::string tictactoe,char smbl) {
    bool result = false;
    int h,v,d1, d2;
    d1=0;
    d2=0;
    for (int i=1 ; i < 4; i++) {
        h=0;
        v=0;

        if (simbol(tictactoe,i,i)==smbl)  d1++;
        if (simbol(tictactoe,4-i,i)==smbl)  d2++;
        for (int j=1; j < 4; j++) {
            if (simbol(tictactoe,j,i)==smbl)  h++;
            if (simbol(tictactoe,i,j)==smbl) v++;
        }
        if (h==3) { result = true; break; }
        if (v==3) { result = true; break; }

    }
    if (d1==3) { result = true; }
    if (d2==3) { result = true;  }
    return result;
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
    std::cout<<"win x -"<<win(tictactoe,'x')<<"-\n";
    std::cout<<"win o -"<<win(tictactoe,'o')<<"-\n";


    return 0;
}
