#pragma once
#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <vector>


class Queue
{
public:

    /// Copy ctor
    /// Without it, pass-by-value doesn't work.
    Queue(const Queue& to_copy)
    : max_size(to_copy.max_size), front(to_copy.front), back(to_copy.back)
    {
        queue.reserve(max_size); /// May be redundant
        queue = to_copy.queue;
    }

    Queue(const unsigned int _max_size)
    : max_size(_max_size)
    {
        queue.reserve(max_size);
        for (unsigned int i = 0; i < max_size; i++)
            queue[i] = -1;
    }

    void insert(const int new_element) 
    {
        // Wouldn't front-back paradigm dominate all calculations?
        if (back == max_size)
            return;
        queue[++back] = new_element;
    }

    int remove()
    {
        return queue[front++];
    }

    bool is_empty()
    {
        return (front > back);
    }

private:
    
    const int max_size = -1; /// KEEP IT SIGNED. Otherwise, size comparison will break.
    int front = 1, back = 0;
    std::vector<int> queue = {};
};


#endif /// QUEUE_HPP