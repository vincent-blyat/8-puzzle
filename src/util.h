#ifndef UTIL_H
#define GLOBAL_H

#include<string>

extern std::string input_str;
extern int problem_state[3][3];

#endif

extern void process_arg_vector(int arg_count, char* arg_vector[]);

extern void read_file(char* filepath);

extern void read_input(char* input);

extern void solve(int problem_state[][3]);
