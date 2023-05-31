#include <iostream>
#include <vector>
#include <algorithm>

void print_vi(const std::vector<int>& vi)
{
    for (const auto& i : vi) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vi = { 1, 1, 2, 5, 6, 1, 2, 4 };
    std::cout << "[IN]: ";
    print_vi(vi);
    std::sort(vi.begin(), vi.end());
    auto un = std::unique(vi.begin(), vi.end());
    vi.erase(un, vi.end());
    std::cout << "[OUT]: ";
    print_vi(vi);
}
