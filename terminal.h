//
// Created by jdudz on 29.11.2017.
//

#ifndef PO_PROJECT_TERMINAL_H
#define PO_PROJECT_TERMINAL_H

#include <iostream>
#include <fstream>
#include "classes.h"

using namespace std;

struct structure_of_object { ///lista obiektow danej klasy
    string object_name;///nazwa obiektu klasy
    A *object = nullptr;
    structure_of_object *next = nullptr;///wskaznik na nastepny obiekt klasy
};

class structure_of_classes{
private:
    string name;///nazwa klasy
    structure_of_classes *parent[2] = {nullptr};///tablica wskaznikow na  rodzicow
    structure_of_classes *child[4] = {nullptr};/// tablica wskaznikow na dzieci
    structure_of_object *list_of_objects = nullptr;///lista obiektow danej klasy
    structure_of_object *current = nullptr;///wskaznik na aktualną pozycje w liscie obiektow
protected:
    void set_name(string tmp);///ustawia nazwe klasy
    void find(string nameO);///znajduje obiekt klasy o danej nazwie i ustawia na niego wskaznik current
public:
    structure_of_classes(string nameC);
    bool leaf();///sprawdza czy dana klasa jest lisciem
    string get_name();///podaje nazwe klasy
    string get_object_name();///podaje nazwe obiektu
    structure_of_object *get_list_of_objects();///przekazuje listę obiektow do zapisu
    structure_of_classes *get_child(int i);///zwraca dziecko
    int object_amount();///zwraca ilosc obiektow w klasie
    void show_objects(int level);///funkcja pomocnicza do funkcji tree, wypisuje obiekty lisci
    void show_objects();///funkcja pomocnicza funkcji DIR
    void show_object(string nameS);/// finkcja pomocnicza do SHOW, podaqje zawartość obiektu
    void set_parents(structure_of_classes *one, structure_of_classes *two);///ustawia rodzicow danej klasy
    void set_children(structure_of_classes *one, structure_of_classes *two, structure_of_classes *three, structure_of_classes *four);///ustawia dzieci danej klasy
    void set_object(string param);/// tworzy obiekt i ustawia wskaznik na liste obiektow
    void set_object_from_file(ifstream& read,string nam, string param);///trorzy obiekt wczytany z pliku
    void del(string nameO);///usuwa obiekt o podanej nazwie
    void modify(string nameM);///modyfikuje obiekt o podanej nazwie
    ~structure_of_classes();
};

class terminal {
private:
    structure_of_classes *tab[13];///cała hierarchia klas
    structure_of_classes *curr;///wskaznik na to gdzie aktualnie sie znajdujemy w hierarchi
    void loop();
    void CD(string param);
    void MO(string param);
    void DO(string param);
    void MDO(string param);
    void tree(structure_of_classes *tmp, int level);
    void DIR(structure_of_classes *tmp);
    void save(string param);
    void read(string param);

public:
    terminal();
    ~terminal();
};


#endif //PO_PROJECT_TERMINAL_H
