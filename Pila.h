

template <typename T>
class Pila{
    private:
        T *ptr;
        int size;
        int capacity;


    public:
        Pila(int capacity);
        ~Pila();

        T pop();
        Void push(T elemento);

        int getSize();
        bool isFull;
        bool isEmpty();


};