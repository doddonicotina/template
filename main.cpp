#include "Pila.cpp"
int main(){

    {
        Pila <int> p(3);
        std::cout<<" empty? "<<p.isEmpty()<<"\n";
        p.push(55);
        p.push(88);
        p.push(3);
		std::cout<<" is full? "<<p.isFull()<<"\n";
		int N = p.getSize();
		for (int i=0; i<N; i++)
		 {
		 	std::cout<<"elem "<<i<<p.pop()<<" \n";
		 }

        std::cout<<p.pop()<<std::endl;
    }
    
    {
    	Pila<char> p(4);
    	p.push('A');
    	p.push('b');
    	p.push('c');
    	p.push('d');
	}
}
