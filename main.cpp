#include <iostream>
#include "Pila.cpp"
int main(){

    {
        Pila <int> p(3);
        int a=5;
        p.push(a);
        a++;
        p.push(a);
        a++;
        p.push(a);

        cout<<p.pop()<<endl;
    }
}
