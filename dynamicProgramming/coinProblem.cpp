#include <stddef.h>
#include <vector>
#include <iostream>


int solve(int s, std::vector<int>& coins){
    if ( s <= 0 ) return 0;
    int best = 9999;

    for (auto c: coins){
        int sol =  solve(s-c, coins) + 1;
        if (sol < best)  best = sol; 
    }
    
    return best;

}



int main(int argc, char const *argv[])
{
    std::vector<int> coins = {1, 3, 4};
    int optimo = solve(10, coins);
    std::cout << "Encontrado!\n";
    std::cout << optimo;
    std::cout << "\n";
}
