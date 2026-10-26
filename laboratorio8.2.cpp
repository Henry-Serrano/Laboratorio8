#include <iostream>

using namespace std;
float celsiusafarenheit(float celsius){
    float farenheit;
    farenheit=(celsius*9/5)+32;
    return farenheit;
}
int main(){
    float celsius;
    cout<<"ingrese la temperatura en celsius:"<<endl;
    cin>>celsius;
    cout<<"la temperatura en farenheit es :"<<celsiusafarenheit(celsius)<<endl;
    return 0;
}