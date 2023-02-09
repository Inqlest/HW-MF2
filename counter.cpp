#include "counter.h"

    Counter::Counter(int count){
        this->count = count;
    }
    Counter::Counter(){
    }
    int Counter::add(){
        return count++;
    }
    int Counter::reduce(){
        return count--;
    }
    int Counter::out(){
        return count;
    }