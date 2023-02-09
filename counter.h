#pragma once

class Counter{
    private:
    int count;
    public:
    Counter(int count);
    Counter();
    int add();
    int reduce();
    int out();
};