#include "Artiodactyla.cpp"
#include "boi.cpp"
#include "cao.cpp"
#include "Carnivora.cpp"
#include "cavalo.cpp"
#include "gato.cpp"
#include "Laurasiatheria.cpp"
#include "Perissodactyla.cpp"
#include "porco.cpp"


int main(){
Laurasiatheria *p[9] = {new Artiodactyla(), new boi(), new
cao(), new Carnivora(), new cavalo(), new gato(), new
Laurasiatheria(), new Perissodactyla(), new porco()};

int i;
for(i=0; i<9; i++){
    p[i]->som();
};
};
