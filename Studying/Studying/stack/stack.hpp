#pragma once
#ifndef STACK_HPP
#define STACK_HPP

#include <vector>


class Stack
{
public:

    /// Copy ctor
    /// Without it, pass-by-value doesn't work.
    Stack(const Stack& to_copy)
    : total_max(to_copy.total_max), curr_max(to_copy.curr_max)
    {
        stack.reserve(total_max); /// May be redundant.
        stack = to_copy.stack;
    }

    Stack(const unsigned int _max_size)
    : total_max(_max_size)
    {
        stack.reserve(total_max);
        for (unsigned int i = 0; i < total_max; i++)
            stack[i] = -1;
    }

    void push(const int new_element)
    {
        /// Update count, add
        if (curr_max == total_max)
            return;
        stack[++curr_max] = new_element;
    }

    int pop()
    {
        /// Return, update count
        if (is_empty())
            return -1;
        return stack[curr_max--];
    }

    bool is_empty()
    {
        return (curr_max == -1);
    }

    int top()
    {
        return stack[curr_max];
    }

private:

    const int total_max = 0; /// KEEP IT SIGNED. Otherwise, size comparison will break.
    int curr_max = -1; /// ID of highest current element
    std::vector<int> stack = {};
};

#endif /// STACK_HPP