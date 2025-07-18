#include <iostream>
#include <vector>

using std::vector;

vector<int> create_row(int times)
{
    vector<int> local;

    for(size_t i = 0; i < times; i++)
        local.insert(local.end() , times + i);


    return local;
}

vector<vector<int>> create(int size)
{
    vector<vector<int>> main_vector;

    for (size_t iterador = 0; iterador < size; iterador++)
        main_vector.insert(main_vector.end(), create_row(iterador + 1));
    
    return main_vector;
}
void print_result(vector<vector<int>> result)
{
    for(size_t iterador = 0; iterador < result.size(); iterador++)
        for(auto row : result.at(iterador))
            std::cout << "";
}
int main()
{
    
    return 0;
}