#include <iostream>
#include <vector>
#include <memory> // shared_ptr

using namespace std;

// classe pai, superclasse
class Animal{  // classe abstrata
    //protected: para somente as classes filhas conseguirem acessar
        bool alive {true};
    public:
    // virtual é uma ligação tardia
    // método virtual puro
        virtual string speak() = 0; // o 0 é pq n vou implementar agora
        
        virtual bool isAlive(){
            return alive; 
        }

        virtual void die(){
            alive = false;
        }

        virtual string str(){
            return string(alive ? "{alive}" : "{dead}");
        }
};

// classe filha, subclasse
// classe usando o alive e die
class Cat:public Animal{
        string name;
        int vidas{7};
    public:
        Cat(string name):name(name){};
        
        string speak(){
            return isAlive() ? "Miau" : "RIP";
        }
        
        virtual void die(){
            if(vidas > 0){
                vidas--;
            }else{
                Animal::die();
            }
        }

        virtual void licking(){
            cout << "Licking" << endl;
        };
        
        string str(){
            return Animal::str() + " Cat " + name + " Vidas: " + to_string(vidas);
        }
};

// classe filha, subclasse
// nao usando o alive e die
class Dog:public Animal{
        string name;
    public:
        Dog(string name):name(name){};
        
        string speak(){
            return "Au Au";
        }
        
        string str(){
            return Animal::str() + " Dog " + name;
        }
};


int main(){
    /* 
    com ponteiro eu consigo mostrar o str da classe pai,
    da para fazer outras coisas tirando ou colocando o virtual
    Animal *c = new Cat("Tom");
    */

    /*
    Cat c("Tom");
    cout << c.str() << endl;
    cout << c.speak() << endl;
    */

    /*
    Instancias usando vector e depois apagando
    vector<Animal*> animals;
    animals.push_back(new Cat("Tom"));
    animals.push_back(new Dog("Spike"));

    for(auto animal:animals){
        cout << animal->str() << " Som: " << animal->speak() << endl;
    };

    for(auto animal:animals){
        delete animal;
    };
    */
    
    vector<shared_ptr<Animal>> animals;
    animals.push_back(make_shared<Cat>("Tom"));
    animals.push_back(make_shared<Dog>("Spike"));
    animals.push_back(make_shared<Cat>("Lion"));

    // inicia com todos mortos
    for(auto animal:animals){
        animal->die();
    };

    // verifica se esta vivo, se n estiver, tira e dx só os vivos.
    // pessimo em desempenho, mas é só para entender
    for (auto it = animals.begin(); it != animals.end();){
        auto animal = *it;
        if(!animal->isAlive()){
            it = animals.erase(it);
        }else{
            it++;
        }
    }

    for(auto animal:animals){
        /*
        mostra todos os cat que são criados
        auto cat = dynamic_pointer_cast<Cat>(animal);
        if(cat){
            cat->licking();
        }*/
        cout << animal->str() << " Som: " << animal->speak() << endl;
    };


    return 0;
};