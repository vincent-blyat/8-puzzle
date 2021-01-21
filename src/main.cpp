#include <iostream>
#include <string>

#include "util.h"

using namespace std;

string input_str;
int problem_state[3][3] = {0};

int main(int argc, char* argv[]) {
   
    // process the commandline arguments 
    process_arg_vector(argc, argv);


    // solve the problem
    solve(problem_state);
    

    return 0;
}
