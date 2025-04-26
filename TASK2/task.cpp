#include <iostream>
#include <string>

using namespace std;



int main(){
   int age;
    string name;
    getline(cin, name);
    cin >> age;
    cout << "name: " << name ;
    cin.ignore();
    return 0;

}

