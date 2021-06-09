// File:
// Name: Curtis Mitchell
// Date:
// Compiler Used: MinGW-w64
// Purpose:

#include <iostream>

using namespace std;

template <class T1, class T2>
class Pair
{
public:
    Pair();
    Pair(T1 initialFirst, T2 p_initialSecond);

    T1 getFirst();
    T2 getSecond();

    void setFirst(T1 newFirst);
    void setSecond(T2 newSecond);
private:
    T1 m_first;
    T2 m_second;
};

template <class T1, class T2>
Pair<T1,T2>::Pair()
{
    //Purposely left empty
    //  data members are initialized
    //	in the class definition
}

template <class T1, class T2>
Pair<T1,T2>::Pair(T1 p_first, T2 p_second)
{
    m_first = p_first;
    m_second = p_second;
}

template <class T1, class T2>
T1 Pair<T1,T2>::getFirst()
{
    return m_first;
}

template <class T1, class T2>
T2 Pair<T1,T2>::getSecond()
{
    return m_second;
}

template <class T1, class T2>
void Pair<T1,T2>::setFirst(T1 newFirst)
{
    m_first = newFirst;
}

template <class T1, class T2>
void Pair<T1,T2>::setSecond(T2 newSecond)
{
    m_second = newSecond;
}

int main()
{
    Pair<int, int> myPair1;
    myPair1.setFirst(111);
    myPair1.setSecond(222);
    cout << "First value in myPair1 = " << myPair1.getFirst() << endl;
    cout << "Second value in myPair1 = " << myPair1.getSecond() << endl;

    Pair<double, string> myPair2(888.8, "hello");
    cout << "First value in myPair2 = " << myPair2.getFirst() << endl;
    cout << "Second value in myPair2 = " << myPair2.getSecond() << endl;

    cout << endl;
    return 0;
}