/**
 *	@file State.h
 *  @author Al Vincent Musa
 *
 */

#ifndef STATE_H
#define STATE_H

#include<iostream>

class State {
    
    private:

        int cost = 0;
        int key = 0;

    public:
	    int puzzle_state[3][3] = {0};
	    State();
        State(const int arr[][3], const int cost, const int key);
        int getCost() const;
        int getKey() const;
        void setPuzzleState(const int arr[][3]);
        void setCost(const int cost);
        void setKey(const int key);

};

#endif
