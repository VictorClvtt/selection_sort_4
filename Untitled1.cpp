#include <iostream>
#include <algorithm>

int main(){

    int i, j, minimo, vet[7]={12, 6, 4, 1, 14, 7, 21};

    for(j=0;j<=5;j++){
        minimo=j;
        for(i=0+j;i<=6;i++){
            if(vet[i]<vet[j])
            std::swap(vet[i], vet[j]);
        }
    }

    for(i=0;i<=6;i++){
        std::cout << "-NUMERO " << i+1 << ": " << vet[i] << std::endl;
    }

    return 0;
}
