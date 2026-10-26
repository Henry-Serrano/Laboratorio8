#include <iostream>

using namespace std;
void mostrarparidad(int n){
    if(n%2){
        cout<<"el numero es impar"<<endl;
    }
    else if(n==0){
        cout<<"cero es cero"<<endl;
    }
     else {
    cout<<"el numero es par"<<endl;
}
}
int main(){
    int n;
    cout <<"ingrese un numero:"<<endl;
    cin>>n;
    mostrarparidad(n);
    return 0;
}