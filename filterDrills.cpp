#include <iostream>
#include <vector>
#include <ranges>

int main() {
    std::vector<int> v{1,2,3,4,5,6};

    auto evens = v | std::views::filter([](int x){ return x % 2 == 0; });

    for (int x : evens)
        std::cout << x << " ";
}