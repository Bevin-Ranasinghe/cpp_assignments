#include <iostream>
#include<string>
class House {
public:
    // Attributes
 std::string *address;
    int rooms;

    House(std::string addr, int rm){
        address = new std::string (addr);
        rooms = rm;
        std::cout << "House crea";
    

    } 

    ~House(){
        delete address;
        std::cout << "House destroyed" << std::endl;
    }
void display(){
        std::cout << "Address: " << address << ", Rooms: " << rooms << std::endl;

    }
};
int main() {
   House* h1 = new House("123 Main St", 3);
   h1 -> display();
   delete h1;
   h1= nullptr;
   return 0;
}