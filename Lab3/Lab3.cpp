#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> list;
    list.push_front(6);
    list.push_front(5);
    list.push_front(25);
    list.push_front(3);
    list.sort();
    int count{ 0 };
    for (std::forward_list<int>::iterator it = list.begin(); it != list.end(); ++it)
    {
        ++count;
    }
    std::forward_list<int>::iterator it = list.begin();
    for (count; count > 2; --count)
    {
        ++it;
    }
    list.erase_after(it);
    for (const auto& element : list)
    {
        std::cout << element << '\n';
    }

    return 0;
}