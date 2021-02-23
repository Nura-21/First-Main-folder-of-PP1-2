#include <iostream>

using namespace std;

template<typename T> 
class Vector
{
    public:
    
    class iterator;
    
    Vector(int sz)
    {
        arr = new T[sz];
        _size = sz;
    }
    
    T& operator[] (int index)
    {
        return arr[index];
    }
    
    iterator begin()
    {
        return iterator(&arr[0]);
    }
    
    iterator end()
    {
        return iterator(&(arr[_size]);ч
    }
    
    void pop_back()
    {
        if(_size > 0)
        {
            _size--;
        }
        else cout << "error" << endl;
    }
    
    void size()
    {
        return _size;
    }
    
    void print_all()
    {
        for(int i = 0; i < _size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void resize(int new_size)
    {
        T* tmp = new T[_size];
        for(int i = 0; i < sz; i++)
        {
            tmp[i] = arr[i];
        }
        _capacity = new_size*2;
        arr = new T[_capacity];
        for(int i = 0; i < _size; i++)
        { 
            arr[i] = tmp[i];
        }
        delete[] tmp;
    }
    
    void push_back(int value)
    {
        if(_size*2 >= _capacity)
        {
            resize(_capacity*2);
        }
        arr[_size] = value;
        _size++;
    }

    void 

    private: 
    T* arr;
    int _capacity;
    int _size;
};

template<typename T>
class Vector<T> :: iterator 
{
    public:
    iterator(){};
    iterator(T* _element) : element(_element) {}
    T& operator*()
    {
        return *element;
    }
    private:
    T* element;
};

int main()
{
    Vector<int> myvec(10);

    for(int i = 0; i < 10; i++)
    {
        myvec[i] = i;
    }

    for(int i = 0; i < 10; i++)
    {
        cout << myvec[i] << " ";
    }

    return 0;

}