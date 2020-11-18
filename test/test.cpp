#include <iostream>

#include "../src/Despicablecat.h"

using namespace std;

int main(int argc, char** argv) {
        
        State s;
        s.puzzleState[2][2] = 5;

        cout << s.puzzleState[2][3] << endl;

        return 0;
}
