#pragma once
#ifndef STACK_OPERATIONS_HPP
#define STACK_OPERATIONS_HPP

#include <iostream>
#include "stack.hpp"


Stack create();
std::pair<Stack, Stack> divide(Stack& target);
void output(Stack& stack);
unsigned int size(Stack target);


Stack create()
{
    unsigned int stack_size = 0;
    std::cout << "\nInput stack size: ";
    std::cin >> stack_size;
    Stack stack(stack_size);

    std::string input = "";
    std::cout << "Input nums (\"s\" to stop): ";
    for (unsigned int i = 0; i < stack_size; i++)
    {
        std::cin >> input;
        if (input == "s")
            break;
        stack.push(stoi(input));
    }

    return stack;
}


std::pair<Stack, Stack> divide(Stack& target)
{
    const unsigned int target_size = size(target);
    bool odd_size = target_size % 2;

    const unsigned int size1 = target_size / 2 + odd_size;
    const unsigned int size2 = target_size / 2;

    std::pair<Stack, Stack> result = {
        Stack(size1),
        Stack(size2)
    };

    for (unsigned int i = 0; i < size2; i++)
        result.second.push(target.pop());
    
    for (unsigned int i = 0; i < size1; i++)
        result.first.push(target.pop());
    
    return result;
}


void output(Stack& stack)
{
    if (stack.is_empty())
    {
        std::cout << "empty";
        return;
    }
    while (! stack.is_empty())
        std::cout << stack.pop() << " ";
}


unsigned int size(Stack target)
{
    unsigned int count = 0;
    for (count; ! target.is_empty(); count++)
        target.pop();
    
    return count;
}


#endif /// STACK_OPERATIONS_HPP