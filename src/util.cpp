#include <iostream>
#include <fstream>
#include <getopt.h>
#include <sstream>

#include "util.h"

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

void read_file(char* file_path) {
    
    string file_content;
    ifstream input_file(file_path);
    
    while(getline(input_file, file_content)) {
    
        cout << file_content << endl;
    }
    
    input_file.close();

    return;
}

void read_input(char* input) {
    
    string input_nums[9];
    int i = 0;
    stringstream ssin(input);

    while(ssin.good() && i < 9) {
    
        ssin >> input_nums[i];
        i++;
    }

    for(i = 0; i < 9; i++) {
        
        cout << input_nums[i] << " " << endl;
    }
}
