//basic types

#include <iostream>
#include <bitset>
using namespace std;

int main (){

    int myInt = 0;   //intero
    uint myUInt = 0; //intero che puo essere solo positivo, quindi puo contenere numwri positivi più alti

    cout << myInt << endl;
    cout << myUInt << endl;
    cout << --myInt << endl;
    cout << --myUInt << endl; 

    cout << sizeof(int) << endl; //dimensione in byte
    cout << INT32_MAX << endl;  //valoro massimo che ha l'intero 8*4=32

    myInt = INT32_MAX;
    cout << myInt << endl;
    cout << ++myInt << endl;

    int16_t myInt16 = 0; //variabile che ha solo 16 bit
    
    float f = 12.5;
    double d = 14.12;
    long double l = 3.14151451255155214;
}