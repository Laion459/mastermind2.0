#include "game.h"
/**
 * Gera o senha aleatoria
 * @param lengthKey tamanho da senha
 * @return retorna senha aleatoria
 */
std::string randomKey(int lengthKey){
    std::string randomKey;

    srand(time(nullptr));

    for (int i=0; i < lengthKey; i++){
        int index = rand() % 5;
        randomKey += KEYCOLORS[index];
    }
    return randomKey;
}
//void validateInputPlayer(std::string input) {
//    if (input == KEYCOLORS) {
//        std::cout << " ERROR! Cores digitadas sao invalidas! " << std::endl;
//        inputPlayer();
//    }
//}
std::string inputPlayer(){
    std::string input;
    std::cout<<" Digite chave de cores pelas iniciais em ingles: "<<std::endl;

    do{
        std::cin >>input;
    } while (input.length() != 4);
    //validateInputPlayer(input);
    return input;
}

