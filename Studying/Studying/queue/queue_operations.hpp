#pragma once
#ifndef QUEUE_OPERATIONS_HPP
#define QUEUE_OPERATIONS_HPP

#include "queue.hpp"
#include <vector>

Queue create();
Queue merge(const std::vector<int> array1, const std::vector<int> array2);
void output(Queue& queue);


Queue create()
{
    unsigned int size = 0;
    std::cout << "\nInput queue size: ";
    std::cin >> size;
    Queue queue(size);

    std::string input = "";
    std::cout << "Input nums (\"s\" to stop): ";
    for (unsigned int i = 0; i < size; i++)
    {
        std::cin >> input;
        if (input == "s")
            break;
        queue.insert(stoi(input));
    }

    ///return staqueueck; // for the memories
    return queue;
}


Queue queue_merge(const std::vector<int>& array_front, const std::vector<int>& array_reverse)
{
    unsigned int size = array_front.size() + array_reverse.size();
    Queue result(size);
    if (size <= 0)
        return result;

    for (unsigned int i = 0; i < array_front.size(); i++)
        result.insert(array_front[i]);
    
    for (int j = array_reverse.size() - 1; j >= 0; j--)
        result.insert(array_reverse[j]);
    
    return result;
}


void output(Queue& queue)
{
    if (queue.is_empty())
    {
        std::cout << "empty";
        return;
    }
    while (! queue.is_empty())
        std::cout << queue.remove() << ' ';
}


#endif /// QUEUE_OPERATIONS_HPP