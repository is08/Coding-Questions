#include<iostream>
using namespace std;

template<class T>
class linearList{
private:
    int length;
    int maxSize;
    T* elements;

public:
    linearList(){maxSize = 10;}
    linearList(int maxListSize);
    ~linearList(){delete [] elements;}
    bool isEmpty() const {return (length == 0);}
    int getLength() const {return length;}

    //find the kth element in the list and store it in x
    bool findElementAtPos(int k, T& x) const;

    //find the position of element x
    int searchElement(const T& x) const;

    //delete kth element and return the list
    linearList<T>& Delete(int k, T& x);

    //insert x after kth element
    linearList<T>& Insert(int k, const T& x);
};

template<class T>
linearList<T>::linearList(int maxListSize){
    maxSize = maxListSize;
    elements = new T[maxSize];
    length = 0;
}


template<class T>
bool linearList<T> :: findElementAtPos(int k, T& x) const{
    if(k < 1 || k > length){
        return false;
    }
    x = elements[k - 1];
    return true;
}

template<class T>
int linearList<T> :: searchElement(const T& x) const{
    for(int i = 0; i < length; i++){
        if(elements[i] == x){
            return ++i;
        }
    }
    return 0;
}


template<class T>
linearList<T>& linearList<T>::Delete(int k, T& x){
    if (findElementAtPos(k, x)){
        for(int i = k; i < length; i++){
            elements[i - 1] = elements[i];
        }
        length--;
    }
    return *this;
}

template<class T>
linearList<T>& linearList<T>::Insert(int k, const T& x){
    if(k >= 0 && k < length){
        for(int i = length - 1; i >= k; i--){
            elements[i + 1] = elements[i];
        }
        elements[k] = x;
        length++;
    }
}


int main(){
    linearList<int> L(5);
    cout << "Length is " << L.getLength() << endl;
    cout << "IsEmpty = " << L.isEmpty() << endl;
    L.Insert(0, 2).Insert(1, 6);

    return 0;
}
