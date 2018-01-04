//
// Created by jdudz on 27.11.2017.
//

#include "classes.h"

using namespace std;

/// ----------CLASS A---------
void A::set_priv_A() {
    cout << " Podaj wartosc prywatna klasy A";
    cin >> priv_A;
}
void A::set_prot_A(){
    cout << " Podaj wartosc chroniona klasy A";
    cin >> prot_A;
}

void A::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
}

A::A(){
    set_priv_A();
    set_prot_A();
}

A::A(ifstream& read){
    string trash;getline(read,trash);
    read >> priv_A;
    getline(read,trash);
    read >> prot_A;
    getline(read,trash);
    show_class_A();
}

void A::show_class_A() {
    cout << "dane prywatne klasy A: " << priv_A << endl;
    cout << "dane chronione klasy A: " << prot_A << endl;
}

int A::get_priv_A() {
    return priv_A;
}

int A::get_prot_A() {
    return prot_A;
}

void A::show() {
    show_class_A();
}

void A::save_object(ofstream& save) {
    cout<< "nothing to save" << endl;
}

A::~A() {
    cout << "usuwanie obiektu klasy A" << endl;
}
///----------END CLASS A----------


///----------ClASS B----------
void B::set_priv_B() {
    cout << " Podaj wartosc prywatna klasy B";
    cin >> priv_B;
}
void B::set_prot_B(){
    cout << " Podaj wartosc chroniona klasy B";
    cin >> prot_B;
}

void B::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy B? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_B();
    }
    cout << "Czy chcesz zmienic dane chronione klasy B? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_B();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}

B::B(){
    set_priv_B();
    set_prot_B();
}

B::B(ifstream& read):A(read){
    string trash;
    read >> priv_B;
    getline(read,trash);
    read >> prot_B;
    getline(read,trash);
    show_class_B();
}

void B::show_class_B() {
    cout << "dane prywatne klasy B: " << priv_B << endl;
    cout << "dane chronione klasy B: " << prot_B << endl;
}

int B::get_priv_B() {
    return priv_B;
}

int B::get_prot_B() {
    return prot_B;
}

void B::show() {
    show_class_A();
    show_class_B();
}

void B::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_B() << endl;
    save << get_prot_B() << endl;
}

B::~B() {
    cout << "usuwanie obiektu klasy B" << endl;
}
///----------END CLASS B----------


///----------ClASS C----------
void C::set_priv_C() {
    cout << " Podaj wartosc prywatna klasy C";
    cin >> priv_C;
}
void C::set_prot_C(){
    cout << " Podaj wartosc chroniona klasy C";
    cin >> prot_C;
}

void C::mod() {
    cout << "Nothing to modify" << endl;
}

C::C(){
    set_priv_C();
    set_prot_C();
}
C::C(ifstream& read):A(read){
    string trash;
    read >> priv_C;
    getline(read,trash);
    read >> prot_C;
    getline(read,trash);
    show_class_C();
}

void C::show_class_C() {
    cout << "dane prywatne klasy C: " << priv_C << endl;
    cout << "dane chronione klasy C: " << prot_C << endl;
}

int C::get_priv_C() {
    return priv_C;
}

int C::get_prot_C() {
    return prot_C;
}

void C::show() {
    show_class_A();
    show_class_C();
}

void C::save_object(ofstream& save) {
    cout<< "nothing to save" << endl;
}

C::~C() {
    cout << "usuwanie obiektu klasy C" << endl;
}
///----------END CLASS C----------


///----------ClASS D----------
void D::set_priv_D() {
    cout << " Podaj wartosc prywatna klasy D ";
    cin >> priv_D;
}
void D::set_prot_D(){
    cout << " Podaj wartosc chroniona klasy D ";
    cin >> prot_D;
}

void D::mod() {
    cout << "Nothing to modify" << endl;
}

D::D(){
    set_priv_D();
    set_prot_D();
}

D::D(ifstream& read):A(read){
    string trash;
    read >> priv_D;
    getline(read,trash);
    read >> prot_D;
    getline(read,trash);
    show_class_D();
}

void D::show_class_D() {
    cout << "dane prywatne klasy D: " << priv_D << endl;
    cout << "dane chronione klasy D: " << prot_D << endl;

}

int D::get_priv_D() {
    return priv_D;
}

int D::get_prot_D() {
    return prot_D;
}

void D::show() {
    show_class_A();
    show_class_D();
}

void D::save_object(ofstream& save) {
    cout<< "nothing to save" << endl;
}

D::~D() {
    cout << "usuwanie obiektu klasy D" << endl;
}
///----------END CLASS D----------


///----------ClASS E----------
void E::set_priv_E() {
    cout << " Podaj wartosc prywatna klasy E ";
    cin >> priv_E;
}
void E::set_prot_E(){
    cout << " Podaj wartosc chroniona klasy E ";
    cin >> prot_E;
}

void E::mod() {
    cout << "Nothing to modify" << endl;
}

E::E(){
    set_priv_E();
    set_prot_E();
}

E::E(ifstream& read):A(read){
    string trash;
    read >> priv_E;
    getline(read,trash);
    read >> prot_E;
    getline(read,trash);
    show_class_E();
}

void E::show_class_E() {
    cout << "dane prywatne klasy E: " << priv_E << endl;
    cout << "dane chronione klasy E: " << prot_E << endl;
}

int E::get_priv_E() {
    return priv_E;
}

int E::get_prot_E() {
    return prot_E;
}

void E::show() {
    show_class_A();
    show_class_E();
}

void E::save_object(ofstream& save) {
    cout<< "nothing to save" << endl;
}

E::~E() {
    cout << "usuwanie obiektu klasy E" << endl;
}
///----------END CLASS E----------


///----------ClASS F----------
void F::set_priv_F() {
    cout << " Podaj wartosc prywatna klasy F ";
    cin >> priv_F;
}
void F::set_prot_F(){
    cout << " Podaj wartosc chroniona klasy F ";
    cin >> prot_F;
}

void F::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy C? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_C();
    }
    cout << "Czy chcesz zmienic dane chronione klasy C? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_C();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy F? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_F();
    }
    cout << "Czy chcesz zmienic dane chronione klasy F? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_F();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}

F::F(){
    set_priv_F();
    set_prot_F();
}
F::F(ifstream& read):C(read){
    string trash;
    read >> priv_F;
    getline(read,trash);
    read >> prot_F;
    getline(read,trash);
    show_class_F();
}

void F::show_class_F() {
    cout << "dane prywatne klasy F:  " << priv_F << endl;
    cout << "dane chronione klasy F: " << prot_F << endl;
}

int F::get_priv_F() {
    return priv_F;
}

int F::get_prot_F() {
    return prot_F;
}

void F::show() {
    show_class_A();
    show_class_C();
    show_class_F();
}

void F::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_C() << endl;
    save << get_prot_C() << endl;
    save << get_priv_F() << endl;
    save << get_prot_F() << endl;
}

F::~F() {
    cout << "usuwanie obiektu klasy F" << endl;
}
///----------END CLASS F----------


///----------ClASS G----------
void G::set_priv_G() {
    cout << " Podaj wartosc prywatna klasy G ";
    cin >> priv_G;
}
void G::set_prot_G(){
    cout << " Podaj wartosc chroniona klasy G ";
    cin >> prot_G;
}

void G::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy C? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_C();
    }
    cout << "Czy chcesz zmienic dane chronione klasy C? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_C();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy G? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_G();
    }
    cout << "Czy chcesz zmienic dane chronione klasy G? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_G();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}

G::G(){
    set_priv_G();
    set_prot_G();
}

G::G(ifstream& read):C(read){
    string trash;
    read >> priv_G;
    getline(read,trash);
    read >> prot_G;
    getline(read,trash);
    show_class_G();
}

void G::show_class_G() {
    cout << "dane prywatne klasy G: " << priv_G << endl;
    cout << "dane chronione klasy G: " << prot_G << endl;
}

int G::get_priv_G() {
    return priv_G;
}

int G::get_prot_G() {
    return prot_G;
}

void G::show() {
    show_class_A();
    show_class_C();
    show_class_G();
}

void G::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_C() << endl;
    save << get_prot_C() << endl;
    save << get_priv_G() << endl;
    save << get_prot_G() << endl;
}

G::~G() {
    cout << "usuwanie obiektu klasy G" << endl;
}
///----------END CLASS G----------


///----------ClASS H----------
void H::set_priv_H() {
    cout << " Podaj wartosc prywatna klasy H ";
    cin >> priv_H;
}
void H::set_prot_H(){
    cout << " Podaj wartosc chroniona klasy H ";
    cin >> prot_H;
}

void H::mod() {
    cout << "Nothing to modify" << endl;
}

H::H(){
    set_priv_H();
    set_prot_H();
}

H::H(ifstream& read):D(read){
    string trash;
    read >> priv_H;
    getline(read,trash);
    read >> prot_H;
    getline(read,trash);
    show_class_H();
}

void H::show_class_H() {
    cout << "dane prywatne klasy H: " << priv_H << endl;
    cout << "dane chronione klasy H: " << prot_H << endl;
}

int H::get_priv_H() {
    return priv_H;
}

int H::get_prot_H() {
    return prot_H;
}

void H::show() {
    show_class_A();
    show_class_D();
    show_class_H();
}

void H::save_object(ofstream& save) {
    cout<< "nothing to save" << endl;
}

H::~H() {
    cout << "usuwanie obiektu klasy H" << endl;
}
///----------END CLASS H----------



///----------ClASS I----------
void I::set_priv_I() {
    cout << " Podaj wartosc prywatna klasy I ";
    cin >> priv_I;
}
void I::set_prot_I(){
    cout << " Podaj wartosc chroniona klasy I ";
    cin >> prot_I;
}

void I::mod() {
    cout << "Nothing to modify" << endl;
}

I::I(){
    set_priv_I();
    set_prot_I();
}

I::I(ifstream& read):D(read){
    string trash;
    read >> priv_I;
    getline(read,trash);
    read >> prot_I;
    getline(read,trash);
    show_class_I();
}

void I::show_class_I() {
    cout << "dane prywatne  klasy I: " << priv_I << endl;
    cout << "dane chronione klasy I: " << prot_I << endl;
}

int I::get_priv_I() {
    return priv_I;
}

int I::get_prot_I() {
    return prot_I;
}

void I::show() {
    show_class_A();
    show_class_D();
    show_class_I();
}

void I::save_object(ofstream& save) {
    cout<< "nothing to save" << endl;
}

I::~I() {
    cout << "usuwanie obiektu klasy I" << endl;
}
///----------END CLASS I----------



///----------ClASS J----------
void J::set_priv_J() {
    cout << " Podaj wartosc prywatna klasy J ";
    cin >> priv_J;
}
void J::set_prot_J(){
    cout << " Podaj wartosc chroniona klasy J ";
    cin >> prot_J;
}

void J::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy E? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_E();
    }
    cout << "Czy chcesz zmienic dane chronione klasy E? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_E();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy J? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_J();
    }
    cout << "Czy chcesz zmienic dane chronione klasy J? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_J();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}

J::J(){
    set_priv_J();
    set_prot_J();
}

J::J(ifstream& read):E(read){
    string trash;
    read >> priv_J;
    getline(read,trash);
    read >> prot_J;
    getline(read,trash);
    show_class_J();
}

void J::show_class_J() {
    cout << "dane prywatne klasy J: " << priv_J << endl;
    cout << "dane chronione klasy J: " << prot_J << endl;
}

int J::get_priv_J() {
    return priv_J;
}

int J::get_prot_J() {
    return prot_J;
}

void J::show() {
    show_class_A();
    show_class_E();
    show_class_J();
}

void J::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_E() << endl;
    save << get_prot_E() << endl;
    save << get_priv_J() << endl;
    save << get_prot_J() << endl;
}

J::~J() {
    cout << "usuwanie obiektu klasy J" << endl;
}
///----------END CLASS J----------



///----------ClASS K----------
void K::set_priv_K() {
    cout << " Podaj wartosc prywatna klasy K ";
    cin >> priv_K;
}
void K::set_prot_K(){
    cout << " Podaj wartosc chroniona klasy K ";
    cin >> prot_K;
}

void K::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy E? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_E();
    }
    cout << "Czy chcesz zmienic dane chronione klasy E? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_E();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy K? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_K();
    }
    cout << "Czy chcesz zmienic dane chronione klasy K? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_K();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}
K::K(){
    set_priv_K();
    set_prot_K();
}

K::K(ifstream& read):E(read){
    string trash;
    read >> priv_K;
    getline(read,trash);
    read >> prot_K;
    getline(read,trash);
    show_class_K();
}

void K::show_class_K() {
    cout << "dane prywatne " << priv_K << endl;
    cout << "dane chronione klasy " << prot_K << endl;
}

int K::get_priv_K() {
    return priv_K;
}

int K::get_prot_K() {
    return prot_K;
}

void K::show() {
    show_class_A();
    show_class_E();
    show_class_K();
}

void K::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_E() << endl;
    save << get_prot_E() << endl;
    save << get_priv_K() << endl;
    save << get_prot_K() << endl;
}

K::~K() {
    cout << "usuwanie obiektu klasy K" << endl;
}
///----------END CLASS K----------



///----------ClASS L----------
void L::set_priv_L() {
    cout << " Podaj wartosc prywatna klasy L ";
    cin >> priv_L;
}
void L::set_prot_L(){
    cout << " Podaj wartosc chroniona klasy L ";
    cin >> prot_L;
}

void L::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy D? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_D();
    }
    cout << "Czy chcesz zmienic dane chronione klasy D? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_D();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy H? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_H();
    }
    cout << "Czy chcesz zmienic dane chronione klasy H? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_H();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy L? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_L();
    }
    cout << "Czy chcesz zmienic dane chronione klasy L? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_L();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}

L::L(){
    set_priv_L();
    set_prot_L();
}

L::L(ifstream& read):H(read),D(read){
    string trash;
    read >> priv_L;
    getline(read,trash);
    read >> prot_L;
    getline(read,trash);
    show_class_L();
}

void L::show_class_L() {
    cout << "dane prywatne klasy L: " << priv_L << endl;
    cout << "dane chronione klasy L: " << prot_L << endl;
}

int L::get_priv_L() {
    return priv_L;
}

int L::get_prot_L() {
    return prot_L;
}

void L::show() {
    show_class_A();
    show_class_D();
    show_class_H();
    show_class_L();
}

void L::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_D() << endl;
    save << get_prot_D() << endl;
    save << get_priv_H() << endl;
    save << get_prot_H() << endl;
    save << get_priv_L() << endl;
    save << get_prot_L() << endl;
}

L::~L() {
    cout << "usuwanie obiektu klasy L" << endl;
}
///----------END CLASS L----------



///----------ClASS M----------
void M::set_priv_M() {
    cout << " Podaj wartosc prywatna klasy M ";
    cin >> priv_M;
}
void M::set_prot_M(){
    cout << " Podaj wartosc chroniona klasy M ";
    cin >> prot_M;
}

void M::mod() {
    char change;
    cout << "Czy chcesz zmienic dane prywatne klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_A();
    }
    cout << "Czy chcesz zmienic dane chronione klasy A? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_A();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy D? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_D();
    }
    cout << "Czy chcesz zmienic dane chronione klasy D? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_D();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy H? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_H();
    }
    cout << "Czy chcesz zmienic dane chronione klasy H? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_H();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy I? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_I();
    }
    cout << "Czy chcesz zmienic dane chronione klasy I? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_I();
    }
    cout << "Czy chcesz zmienic dane prywatne klasy M? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_priv_M();
    }
    cout << "Czy chcesz zmienic dane chronione klasy M? (Y/N)";
    cin >> change;
    if (change == 'y' || change == 'Y')
    {
        set_prot_M();
    }
    string trash;getline(cin,trash);///czyszczenie bufora
}

M::M(){
    set_priv_M();
    set_prot_M();
}

M::M(ifstream& read):I(read),H(read),D(read){
    string trash;
    read >> priv_M;
    getline(read,trash);
    read >> prot_M;
    getline(read,trash);
    show_class_M();
}

void M::show_class_M() {
    cout << "dane prywatne klasy M: " << priv_M << endl;
    cout << "dane chronione klasy M: " << prot_M << endl;
}

int M::get_priv_M() {
    return priv_M;
}

int M::get_prot_M() {
    return prot_M;
}

void M::show() {
    show_class_A();
    show_class_D();
    show_class_H();
    show_class_I();
    show_class_M();
}

void M::save_object(ofstream& save) {
    save << get_priv_A() << endl;
    save << get_prot_A() << endl;
    save << get_priv_D() << endl;
    save << get_prot_D() << endl;
    save << get_priv_H() << endl;
    save << get_prot_H() << endl;
    save << get_priv_I() << endl;
    save << get_prot_I() << endl;
    save << get_priv_M() << endl;
    save << get_prot_M() << endl;
}

M::~M() {
    cout << "usuwanie obiektu klasy M" << endl;
}
///----------END CLASS M----------