#include <iostream>
#include <vector>
#include "queue/queue.hpp"
#include "queue/queue_operations.hpp"

/* Сформировать очередь для двух массивов вещественных значений таким образом,
чтобы начало первого массива стало началом очереди,
    а начало второго - её концом.

0 1 2 3 4
5 6 7 8 9 
   
=> 0 1 2 3 4 | 9 8 7 6 5
*/


std::vector<int> vector_from_input();


/// Lesson: evaluation order of args is unspecified.
int main()
{
    std::cout << "\n(vec1) ";
    const std::vector<int> vec1 = vector_from_input();
    std::cout << "\n(vec2) ";
    const std::vector<int> vec2 = vector_from_input();
    
    Queue queue = queue_merge(vec1, vec2);
    std::cout << "\nQueue: ";
    output(queue);

    return 0;
}


std::vector<int> vector_from_input()
{
    std::cout << "Input nums (\"s\" to stop): \n> ";
    std::vector<int> result = {};
    std::string input = "";

    while (true)
    {
        std::cin >> input;
        if (input == "s")
            break;
        result.push_back(stoi(input));
    }
    
    return result;
}