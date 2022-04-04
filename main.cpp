#include "Pila.cpp"
int main(){

    {
        Pila <int> p(3);
        if (p.isEmpty())
        {
			std::cout<<"Pila is empty \n";
		}
        p.push(55);
        if (p.isEmpty())
        {
			std::cout<<"Pila is empty \n";
		}else{
			std::cout<<"Pila is not empty \n";
		}
        p.push(88);
        p.push(3);
		if (p.isFull())
		{
			std::cout<<"Pila is full \n";
		}
		int N = p.getSize();
		for (int i=0; i<N; i++)
		 {
		 	std::cout<<"sto poppando  l'elemento n1: "<<p.pop()<<" \n";
		 }

        //std::cout<<p.pop()<<std::endl;
    }
    
    {
    	Pila<char> p(4);
    	std::cout<<"Dim before push: "<<p.getSize()<<"\n";
    	p.push('A');
    	p.push('b');
    	p.push('c');
    	p.push('d');
    	std::cout<<"Dim after push: "<<p.getSize()<<"\n";
    	p.pop();
    	std::cout<<"Dim after pop: "<<p.getSize()<<"\n";
	}
	
	
	{
		//caso di utilizzo invio pacchetti di rete
		std::string user1="234567ygf", user2="i769o8yih", user3="9845gtioe", user4="9rfy09u0d", user5="uiyhfd89";
		Pila<std::string> Packet(10);
		int n=Packet.getSize();
		//user 1 invia richiesta di un pacchetto x
		Packet.push(user1);
		//user 2 invia richiesta di un pacchetto y
		Packet.push(user2);
		//user 1 invia richiesta di un pacchetto z
		Packet.push(user3);
		
		
		
	}
}
