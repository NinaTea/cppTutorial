#include <stddef.h>
#include <vector>
#include <iostream>


int linearSearch( std::vector<int>& arr, int elem){
    // if found 1
    // if not 0

    int res = 0;
    // for auto usa un iterador, hace bound checking?
    // como funciona? e es el elemento y si 
    // quiero usar el indice?
    for (auto e:arr){
        if (e == elem){
            res = 1;
        }   
    }
    return res;
}



int main(int argc, char const *argv[]) {
    /* code */
    
    std::vector<int> vect = {2,4,6,42,1,808,9,11,0,23,99};
    
    int elemento = 10;
    int found = linearSearch(vect, elemento);

    if (found)
    {
        std::cout << "Encontrado!\n";
    }
    else{
        std::cout << "No encontrado :<\n";
    }
}
