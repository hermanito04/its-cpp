
#include <iostream>
#include <string> //libreria da mettere se ho delle varibili con più carattere
using namespace std;

int main () {
    string name; //string = insieme di caratteri  
    cout << "scrivi il tuo nome" << flush; // flush = visulizza tutto senza bufferizzare 
    cin >> name;

    cout << "il tuo nome è ";
    cout << name << endl;

    cout << endl << endl;

    return(0);
}
