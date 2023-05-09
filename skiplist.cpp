#include "skiplist.h"
#include "random.h"
#include <cassert>
#include <climits>
#include <cstdlib>
#include <iostream>
#include <unordered_map>

using namespace std;

// checks if the value needs to be inserted at a higher level
bool SkipList::shouldInsertAtHigherLevel() const {
    return probability >= Random::random() % 100;
}

// you code goes here

// constructor
SkipList::SkipList(int argLevels){

    levels = argLevels; // note if input negative values
    head->next.resize(levels, nullptr); // set levels

}

// copy constructor
SkipList::SkipList(const SkipList &other){

}

// operator<< for printing can access val directly
ostream &operator<<(ostream &out, const SkipList &skip){

}

// return true if found in SkipList
bool SkipList::contains(int val) const{

}