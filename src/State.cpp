/**
 *	@file State.cpp
 *	@author Al Vincent Musa
 *	
 */

#include "State.h"

#include <iostream>
#include <iterator>
#include <algorithm>
#include <cstring>

// State class constructor
State::State() {

}

// State class constructor
State::State(const int arr[][3], const int cost, const int key) {

	memcpy(this->puzzle_state, arr, sizeof(int) * 3 * 3);
    this->cost = cost;
    this->key = key;
}

// get the cost
int State::getCost() const {
    
    return cost;
}

// get the key
int State::getKey() const {

    return key;
}

// set the puzzle_state
void State::setPuzzleState(const int arr[][3]) {
	
	memcpy(this->puzzle_state, arr, sizeof(int) * 3 * 3);
}

// set the cost
void State::setCost(const int cost) {

	this->cost = cost;
}

// set the key
void State::setKey(const int key) {
	this->key = key;
}
