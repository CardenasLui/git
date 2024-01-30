#include <iostream>
using namespace std;

int main(){
    int x;
    cout<< "Hola mundo" << endl << endl;
    cout << "Ingrese su edad" <<endl;
    cin >> x;
    cout << "Tu edad es de: " << x << endl;
    if(x<=18){
        cout<< "Eres mayor de edad, felicidades, ahora puedes pistear. (LEGALMENTE)" <<endl;
    }else{
        cout << "Eres menor de edad (sigues chamaco nene)" << endl;
    }
    return 0;
}