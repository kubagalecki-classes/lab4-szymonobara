#include <iostream>

template < typename T >
struct Para
{
    Para() {}
    Para(T t1_, T t2_) : t1{t1_}, t2{t2_} {}
    T t1;
    T t2;
    T suma() { return t1 + t2; }
};

template < typename T, unsigned int N >
struct TablicaPar
{
    TablicaPar() {}

    Para< T > tablica[N];

    TablicaPar operator[](int n) { return tablica[n]; }
};

template < typename T >
T iloczyn(T a[], int N)
{
    T wynik = a[0];
    for (int i = 1; i < N; i++)
        wynik *= a[i];
    return wynik;
}

template < typename T >
T sumaPary(Para< T > p)
{
    return p.suma();
}

int main()
{
    Para< int > p1(1, 2);
    std::cout << sumaPary(p1);
}