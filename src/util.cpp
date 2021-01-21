/**
 *  @file util.cpp
 *  @author Al Vincent Musa
 *  
 */


#include <iostream>
#include <fstream>
#include <getopt.h>
#include <sstream>
#include <string>

#include "util.h"
#include "Tree.h"

using namespace std;

// Method to  be used to calculate the h cost
// 1 = Counts the number of tiles in wrong position.
// 2 = Calculates the h cost using manhattan distance.
int heuristic_method;

void process_arg_vector(int arg_count, char* arg_vector[]) {
    
    int c; 

    while(1) {
    
        int option_index = 0;

        static struct option long_options[] = {
            {"heuristics", required_argument, NULL, 'H'},
            {"input", required_argument, NULL, 'i'},
            {"file", required_argument, NULL, 'f'},
            {NULL, 0, NULL, 0}
        };

        c = getopt_long(arg_count, arg_vector, "H:i:", long_options, &option_index);
        
        if(c == -1) {
            
            optind = 0;
            break;
        }

        switch(c) {

            case 'H': {
                        heuristic_method = atoi(optarg);
                        cout << "Using method " << heuristic_method << endl;
                      }
                        break;
            case 'i': {
                        read_input(optarg);
                      }
                        break;
            case 'f': 
                    {
                        read_file(optarg);
                    }

            case '?':
            case ':':
                        break;
                    
        }
    }

    return;
}

// Reads the contents of the input file
void read_file(char* file_path) {
    
    string file_content;
    ifstream input_file(file_path);
    
    while(getline(input_file, file_content)) {
    
        cout << file_content << endl;
    }
    
    input_file.close();

    return;
}

// Reads the argument from -i argument
void read_input(char* input) {

    // splits the input and turns it into an array of 9
    string input_nums[9];
    int i = 0;
    stringstream ssin(input);

    while(ssin.good() && i < 9) {
    
        ssin >> input_nums[i];
        i++;
    }
    
    // transform the array into a matrix
    i = 0;
    for(int j = 0; j < 3; j++) {
        for(int k = 0; k < 3; k++) {
            
            problem_state[j][k] = stoi(input_nums[i]);
            i++;
        }
    }
}

// Solves the  puzzle problem
void solve(int problem_state[][3]) {
   
    Tree_Node search_tree;

    search_tree.state.setPuzzleState(problem_state);

    cout << "Key: " << search_tree.state.getKey() << endl;
    cout << "Cost: " << search_tree.state.getCost() << endl;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << search_tree.state.puzzle_state[i][j] << " ";
        }
        cout << endl;
    }
}
