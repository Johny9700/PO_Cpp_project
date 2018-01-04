//
// Created by jdudz on 27.11.2017.
//

#ifndef PO_PROJECT_CLASSES_H
#define PO_PROJECT_CLASSES_H
#include<iostream>
#include<fstream>
using namespace std;

class A {
private:
    int priv_A;
protected:
    int prot_A;
    void show_class_A();//pokazuje zawartosc klasy A
    int get_priv_A();//zwraca zmienną prywatną klasy
    int get_prot_A();//zwraca zmienną chronioną do klasy
public:
    A();
    A(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_A();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_A();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~A();
};


class B: public A {
private:
    int priv_B;
protected:
    int prot_B;
    void show_class_B();//pokazuje zawartość klasy B
    int get_priv_B();//zwraca zmienną prywatną klasy
    int get_prot_B();//zwraca zmienną chronioną do klasy
public:
    B();
    B(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_B();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_B();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~B();//destruktor zawiera destruktor klasy A
};


class C: public A {
private:
    int priv_C;
protected:
    int prot_C;
    void show_class_C();//pokazuje zawartosc klasy C
    int get_priv_C();//zwraca zmienną prywatną klasy
    int get_prot_C();//zwraca zmienną chronioną do klasy
public:
    C();
    C(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_C();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_C();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~C();//destruktor zawiera destruktor klasy A
};


class D: public A {
private:
    int priv_D;
protected:
    int prot_D;
    void show_class_D();//pakazuje zawartość klasy D
    int get_priv_D();//zwraca zmienną prywatną klasy
    int get_prot_D();//zwraca zmienną chronioną do klasy
public:
    D();
    D(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_D();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_D();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~D();//destruktor zawiera destruktor klasy A
};

class E: public A {
private:
    int priv_E;
protected:
    int prot_E;
    void show_class_E();//pakazuje zawartość klasy E
    int get_priv_E();//zwraca zmienną prywatną klasy
    int get_prot_E();//zwraca zmienną chronioną do klasy
public:
    E();
    E(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_E();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_E();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~E();//destruktor zawiera destruktor klasy A
};


class F: public C {
private:
    int priv_F;
protected:
    int prot_F;
    void show_class_F();//pakazuje zawartość klasy F
    int get_priv_F();//zwraca zmienną prywatną klasy
    int get_prot_F();//zwraca zmienną chronioną do klasy
public:
    F();
    F(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_F();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_F();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~F();//destruktor zawiera destruktor klasy A i C
};


class G: public C {
private:
    int priv_G;
protected:
    int prot_G;
    void show_class_G();//pakazuje zawartość klasy G
    int get_priv_G();//zwraca zmienną prywatną klasy
    int get_prot_G();//zwraca zmienną chronioną do klasy
public:
    G();
    G(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_G();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_G();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~G();//destruktor zawiera destruktor klasy A i C
};


class H: virtual public D {
private:
    int priv_H;
protected:
    int prot_H;
    void show_class_H();//pakazuje zawartość klasy H
    int get_priv_H();//zwraca zmienną prywatną klasy
    int get_prot_H();//zwraca zmienną chronioną do klasy
public:
    H();
    H(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_H();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_H();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~H();//destruktor zawiera destruktor klasy A i D
};


class I: virtual public D {
private:
    int priv_I;
protected:
    int prot_I;
    void show_class_I();//pakazuje zawartość klasy I
    int get_priv_I();//zwraca zmienną prywatną klasy
    int get_prot_I();//zwraca zmienną chronioną do klasy
public:
    I();
    I(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_I();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_I();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~I();//destruktor zawiera destruktor klasy A i D
};


class J: public E {
private:
    int priv_J;
protected:
    int prot_J;
    void show_class_J();//pakazuje zawartość klasy J
    int get_priv_J();//zwraca zmienną prywatną klasy
    int get_prot_J();//zwraca zmienną chronioną do klasy
public:
    J();
    J(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_J();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_J();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~J();//destruktor zawiera destruktor klasy A i E
};


class K: public E {
private:
    int priv_K;
protected:
    int prot_K;
    void show_class_K();//pakazuje zawartość klasy K
    int get_priv_K();//zwraca zmienną prywatną klasy
    int get_prot_K();//zwraca zmienną chronioną do klasy
public:
    K();
    K(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_K();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_K();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~K();//destruktor zawiera destruktor klasy A i E
};


class L: public H {
private:
    int priv_L;
protected:
    int prot_L;
    void show_class_L();//pakazuje zawartość klasy L
    int get_priv_L();//zwraca zmienną prywatną klasy
    int get_prot_L();//zwraca zmienną chronioną do klasy
public:
    L();
    L(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_L();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_L();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~L();//destruktor zawiera destruktor klasy A ,D i H
};


class M: public I, public H {
private:
    int priv_M;
protected:
    int prot_M;
    void show_class_M();//pakazuje zawartość klasy M
    int get_priv_M();//zwraca zmienną prywatną klasy
    int get_prot_M();//zwraca zmienną chronioną do klasy
public:
    M();
    M(ifstream& read);//konstruktor do tworzenia obiektów z pliku
    void set_priv_M();//zmiana lub ustawienie zmiennej prywatnej
    void set_prot_M();//zmiana lub ustawienie zmiennej publicznej
    virtual void mod();//modyfikuje dane w klasie
    virtual void show();//wypisanie wartości wszystkich zmiennych w klasie
    virtual void save_object(ofstream& save);//zapisuje obiekt
    ~M();//destruktor zawiera destruktor klasy A ,D i H
};
#endif //PO_PROJECT_CLASSES_H
