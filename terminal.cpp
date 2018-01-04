//
// Created by jdudz on 29.11.2017.
//

#include <iostream>
#include <fstream>
#include "terminal.h"

using namespace std;

structure_of_classes::structure_of_classes(string nameC)
{
    set_name(nameC);
}

void structure_of_classes::set_name(string tmp)
{
    name = tmp;
}

void structure_of_classes::find(string nameO)
{
    bool exist = false;///ustawia true gdy obiekt istnieje
    structure_of_object *tmp = list_of_objects;
    current = nullptr;

    if(tmp != nullptr && tmp->object_name == nameO )
    {
        exist = true;
        current = tmp;
    }
    else if(tmp != nullptr && tmp->next != nullptr)
    {
        while (tmp->next != nullptr)
        {
            if (tmp->next->object_name == nameO)
            {
                current = tmp->next;
                exist = true;
                break;
            }
            tmp = tmp->next;
        }
        if (!exist)
        {
            cout << "Object dosn't exist" << endl;
        }
        tmp = nullptr;
        delete tmp;
    }
}

void structure_of_classes::set_parents( structure_of_classes *one, structure_of_classes *two)
{
    if(one != nullptr)parent[0] = one;
    if(two != nullptr)parent[1] = two;
}

void structure_of_classes::set_children( structure_of_classes *one, structure_of_classes *two, structure_of_classes *three, structure_of_classes *four)
{
    if(one != nullptr)child[0] = one;
    if(two != nullptr)child[1] = two;
    if(three != nullptr)child[2] = three;
    if(four != nullptr)child[3] = four;
}

string structure_of_classes::get_name()
{
    return name;
}

string structure_of_classes::get_object_name()
{
    return list_of_objects->object_name;
}

structure_of_classes *structure_of_classes::get_child(int i)
{
    return child[i];
}

structure_of_object *structure_of_classes::get_list_of_objects()
{
    return list_of_objects;
}

int structure_of_classes::object_amount()
{
    int counter = 0;
    structure_of_object *tmp = list_of_objects;
    if(tmp == nullptr)
    {
        counter = 0;
    }
    else
    {
        while(tmp != nullptr)
        {
            tmp = tmp->next;
            counter++;
        }
    }
    return counter;
}

void structure_of_classes::show_objects(int level)
{
    if(leaf() && list_of_objects!= nullptr)
    {
        structure_of_object *tmp = list_of_objects;

        while(tmp != nullptr) {
            for (int i = 0; i <= level; i++)
            {
                cout << "    ";
            }
            cout << tmp->object_name << endl;
            tmp = tmp->next;
        }
        delete tmp;
    }
    else
    {
        for (int i = 0; i <= level; i++)
        {
            cout << "    ";
        }
        cout << "empty" << endl;
    }
}

void structure_of_classes::show_objects()
{
    if(leaf() && list_of_objects!= nullptr)
    {
        structure_of_object *tmp = list_of_objects;

        while(tmp != nullptr)
        {
            cout << tmp->object_name << endl;
            tmp = tmp->next;
        }
        delete tmp;
    }
}

void structure_of_classes::show_object(string nameS)
{
    find(nameS);
    if(current != nullptr)
    {
        current->object->show();
    }
    else
    {
        cout << "Object dosn't exist" << endl;
    }
}



void structure_of_classes::set_object(string param)
{
    if (leaf())
    {
        if (list_of_objects == nullptr)
        {
            list_of_objects = new structure_of_object;
            list_of_objects->next = nullptr;
            current = list_of_objects;
        }
        else if (list_of_objects != nullptr && list_of_objects->next == nullptr)
        {
            list_of_objects->next = new structure_of_object;
            list_of_objects->next->next = nullptr;
            current = list_of_objects->next;
        }
        else
        {
            structure_of_object *tmp = list_of_objects;
            while(tmp->next != nullptr)
            {
                tmp = tmp->next;
            }
            tmp->next = new structure_of_object;
            tmp->next->next = nullptr;
            current = tmp->next;
            //delete tmp;
        }
        current->object_name = param;
        if(name == "B")
        {
            current->object = new B();
        }
        else if (name == "F")
        {
            current->object = new F();
        }
        else if (name == "G")
        {
            current->object = new G();
        }
        else if (name == "J")
        {
            current->object = new J();
        }
        else if (name == "K")
        {
            current->object = new K();
        }
        else if (name == "L")
        {
            current->object = new L();
        }
        else if (name == "M")
        {
            current->object = new M();
        }
    }
    else
    {
        cout << "Drectory is nat a lief, try to change directory" << endl;
    }
}

void structure_of_classes::set_object_from_file(ifstream& read,string nam, string param)
{

    if (list_of_objects == nullptr)
    {
        list_of_objects = new structure_of_object;
        list_of_objects->next = nullptr;
        current = list_of_objects;
    }
    else if (list_of_objects != nullptr && list_of_objects->next == nullptr)
    {
        list_of_objects->next = new structure_of_object;
        list_of_objects->next->next = nullptr;
        current = list_of_objects->next;
    }
    else
    {
        structure_of_object *tmp = list_of_objects;
        while(tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = new structure_of_object;
        current = tmp->next;
        delete tmp;
    }
    current->object_name = param;
    if(nam == "B")
    {
        current->object = new B(read);
    }
    else if (nam == "F")
    {
        current->object = new F(read);
    }
    else if (nam == "G")
    {
        current->object = new G(read);
    }
    else if (nam == "J")
    {
        current->object = new J(read);
    }
    else if (nam == "K")
    {
        current->object = new K(read);
    }
    else if (nam == "L")
    {
        current->object = new L(read);
    }
    else if (nam == "M")
    {
        current->object = new M(read);
    }

}

bool structure_of_classes::leaf()
{
    if (child[0] == nullptr && child[1] == nullptr && child[2] == nullptr && child[3] == nullptr) return true;
    else return false;
}

void structure_of_classes::del(string nameO)
{
    find(nameO);
    if(current == nullptr)
    {
        cout << "Error, object not found" << endl;
    }
    else
    {
        structure_of_object *tmp = list_of_objects;

        if(tmp->object_name == nameO && list_of_objects->next == nullptr)
        {
            list_of_objects = nullptr;
        }
        else if(tmp->object_name == nameO && list_of_objects->next != nullptr)
        {
            list_of_objects = list_of_objects->next;
        }
        else
        {
            while (tmp->next->object_name != nameO) {
                tmp = tmp->next;
            }
            if (tmp->next->object_name == nameO && tmp->next->next == nullptr) {
                tmp->next = nullptr;
            } else if (tmp->next->object_name == nameO && tmp->next->next != nullptr) {
                tmp->next = tmp->next->next;
            }
        }

        current->next = nullptr;
        delete current;
        tmp = nullptr;
        delete tmp;
        cout << "Object deleted" << endl;
    }
}

void structure_of_classes::modify(string nameM)
{
    find(nameM);

    if(name == "B")
    {
        current->object->mod() ;
    }
    else if (name == "F")
    {
        current->object->mod();
    }
    else if (name == "G")
    {
        current->object->mod();
    }
    else if (name == "J")
    {
        current->object->mod();
    }
    else if (name == "K")
    {
        current->object->mod();
    }
    else if (name == "L")
    {
        current->object->mod();
    }
    else if (name == "M")
    {
        current->object->mod();
    }
}

structure_of_classes::~structure_of_classes()
{
    cout << name << " deleted" << endl;
}


terminal::terminal()
{
    curr = tab[0];

    ///----------ustawianie nazw----------

    tab[0] = new structure_of_classes("A");
    tab[1] = new structure_of_classes("B");
    tab[2] = new structure_of_classes("C");
    tab[3] = new structure_of_classes("D");
    tab[4] = new structure_of_classes("E");
    tab[5] = new structure_of_classes("F");
    tab[6] = new structure_of_classes("G");
    tab[7] = new structure_of_classes("H");
    tab[8] = new structure_of_classes("I");
    tab[9] = new structure_of_classes("J");
    tab[10] = new structure_of_classes("K");
    tab[11] = new structure_of_classes("L");
    tab[12] = new structure_of_classes("M");

    ///----------koniec ustawiania nazw----------


    ///----------ustawianie rodzicow----------

    tab[1]->set_parents(tab[0], nullptr);
    tab[2]->set_parents(tab[0], nullptr);
    tab[3]->set_parents(tab[0], nullptr);
    tab[4]->set_parents(tab[0], nullptr);
    tab[5]->set_parents(tab[2], nullptr);
    tab[6]->set_parents(tab[2], nullptr);
    tab[7]->set_parents(tab[3], nullptr);
    tab[8]->set_parents(tab[3], nullptr);
    tab[9]->set_parents(tab[4], nullptr);
    tab[10]->set_parents(tab[4], nullptr);
    tab[11]->set_parents(tab[7], nullptr);
    tab[12]->set_parents(tab[7], tab[8]);

    ///----------koniec ustawiania rodzicow----------

    ///----------ustawianie dzieci----------

    tab[0]->set_children(tab[1],tab[2],tab[3],tab[4]);
    tab[2]->set_children(tab[5],tab[6], nullptr, nullptr);
    tab[3]->set_children(tab[7],tab[8], nullptr, nullptr);
    tab[4]->set_children(tab[9],tab[10], nullptr, nullptr);
    tab[7]->set_children(tab[11],tab[12], nullptr, nullptr);
    tab[8]->set_children(tab[12], nullptr, nullptr, nullptr);

    ///----------koniec ustawiania dzieci----------

    loop();
}

terminal::~terminal()
{
    cout << "Deleting terminal" << endl;
    for (int i = 0; i < 13; i++)
    {
        delete tab[i];
    }
    cout << "Terminal deleted" << endl;
}

void terminal::CD(string param)
{
    bool change = 1;
    for(int i = 0; i < 13; i++)
    {
        if (tab[i]->get_name() == param)
        {
            curr = tab[i];
            change = 0;
            cout << "Directory changed" << endl;
            break;
        }
    }
    if(change)
    {
        cout << "Wrong name of the class" << endl;
    }
}

void terminal::MO(string param)
{
    curr->set_object(param);
}

void terminal::DO(string param)
{
    curr->del(param);
}

void terminal::MDO(string param)
{
    curr->modify(param);
}

void terminal::tree(structure_of_classes *tmp, int level)
{
    for(int i = 0; i < level; i++)
    {
        cout << "    ";
    }
    cout << tmp->get_name() << endl;
    if(!tmp->leaf())
    {
        level++;
        for(int i = 0; i < 4; i++)
        {
            if (tmp->get_child(i) != nullptr)
            {
                tree(tmp->get_child(i), level);
            }
        }
    }
    else
    {
        tmp->show_objects(level);
    }
}

void terminal::DIR(structure_of_classes *tmp)
{
    if(!tmp->leaf())
    {
        for(int i = 0; i < 4; i++)
        {
            if (tmp->get_child(i) != nullptr && tmp->get_child(i)->get_name() != "I" )
            {
                DIR(tmp->get_child(i));
            }
        }
    }
    else
    {
        tmp->show_objects();
    }
}

void terminal::save(string param)
{
    ofstream save;
    save.open(param);
    for(int i = 0; i < 13; i++)
    {
        if(tab[i]->leaf())
        {
            if (tab[i]->get_list_of_objects() != nullptr)
            {
                save<< tab[i]->get_name() << " " << tab[i]->object_amount()<< endl;
                structure_of_object *tmp = tab[i]->get_list_of_objects();
                while(tmp != nullptr)
                {
                    save<< tmp->object_name << endl;
                    tmp->object->save_object(save);
                    tmp = tmp->next;
                }
                tmp = nullptr;
                delete tmp;
            }

        }
    }

    save.close();
    cout << "Objects saved to file." << endl;
}

void terminal::read(string param)
{
    ifstream read;
    read.open(param);

    if(!read){
        cout<<"File dosn't exist."<<endl;
        read.close();
    }
    else
    {
        string nam;
        int amount;
        string obj_nam;
        string buff;
        while(!read.eof())
        {
            read >> nam;
            read >> amount;

            for (int i = 0; i < 13; i++) {
                if (tab[i]->get_name() == nam) {
                    for (int j = 0; j < amount; j++)
                    {
                        read >> obj_nam;
                        cout << obj_nam << endl;


                        tab[i]->set_object_from_file(read, nam, obj_nam);
                        cout << "ukonczono tworzenie" << endl;
                    }
                    break;
                }
            }
            nam = "";
            amount = 0;
        }
    }
    cout << "Objects downloaded." << endl;
}

void terminal::loop() {
    while (true)
    {
        cout << "<<:";
        string input;
        string command;/// komenda dla terminalu
        string param;/// parametry dla terminalu

        getline(cin, input);
        command = input.substr(0, input.find(' '));

        if (input.find(' ') > -1) param = "";///sprawdza czy ma parametry i je wydziela
        else param = input.substr((input.find(' ') + 1), input.size());

        if (command == "exit" || command == "EXIT")
        {
            break;
        }
        else if(command == "cd" || command == "CD")
        {
            CD(param);
        }
        else if (command == "mo" || command == "MO")
        {
            MO(param);
            string t; getline(cin,t);///czyszczenie bufora(inaczej po zakonczeniu mo wyskakuje incorect comand)
        }
        else if(command == "do" || command == "DO")
        {
            DO(param);
        }
        else if(command == "mdo" || command == "MDO")
        {
            MDO(param);
        }
        else if(command == "tree" || command == "TREE")
        {
            tree(tab[0], 0);
        }
        else if(command == "dir" || command == "DIR")
        {
            DIR(curr);
        }
        else if(command == "show" || command == "SHOW")
        {
            curr->show_object(param);
        }
        else if(command == "save" || command == "SAVE")
        {
            save(param);///zakładam ze uzytkownik poda w parametrze nazwe z rozszerzeniem txt i jest to nazwa pliku do zapisu
        }
        else if(command == "read" || command == "READ")
        {
            read(param);///zakładam ze uzytkownik poda w parametrze nazwe z rozszerzeniem txt i jest to nazwa pliku z ktorego czytamy
        }
        else
        {
            cout << "Incorrect command" << endl;
        }
    }
}
