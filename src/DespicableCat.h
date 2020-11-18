/**
 * ++++++++++++++++++++++++++++++++++++++
 *      File: DespicableCat.h
 *      Author: Al Vincent Musa
 * ++++++++++++++++++++++++++++++++++++++
 */

#ifndef DESPICABLE_CAT_INCLUDE

#define DESPICABLE_CAT_INCLUDE

class State {

        public:
                State(int* puzzleState) {
                        
                        for(int i = 0; i < 3; i++) {
                                for(int j = 0; j < 3; j++) {
                                        puzzleState[i][j] = 0;
                                }
                        }
                }

        private:
                int puzzleState[3][3];
                int cost = 1;

};

#endif

extern void State::State(int* puzzleState);
