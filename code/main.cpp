#include <iostream>
#include <vector>

std::vector<int> create_row(int times)
{
    std::vector<int> local;

    for(size_t i = 0; i < times; i++)
        local.insert(local.end() , times + i);


    return local;
}

std::vector<std::vector<int>> create(int size)
{
    std::vector<std::vector<int>> main_vector;

    for (size_t iterador = 0; iterador < size; iterador++)
        main_vector.insert(main_vector.end(), create_row(iterador + 1));
    
    return main_vector;
}
void print_result(std::vector<std::vector<int>> result)
{
    for(size_t iterador = 0; iterador < result.size(); iterador++)
        for(auto row : result.at(iterador))
            std::cout << "";
}
int main()
{
    
    return 0;
}