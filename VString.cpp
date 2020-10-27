#include "VString.h"
#include <iostream>
using namespace std ;

VString::VString( )
{
   cout <<  "Construction VString sans paramètres adr =" << this << endl ;

}

void VString::debug()
{
    cout << "\ntaille = " << chaine.size() << endl ;
    if(chaine.size() != 0){
    cout << "contenu = " << chaine.data() << "\n" << endl;
    }
}


VString::VString(const char x[])
{
    for(int i=0 ; x[i] != 0 ; ++i) chaine.push_back(x[i]) ;
    cout <<  "Construction VString avec paramètres adr =" << this  << endl ;
}

VString::~VString(void)
{
    cout <<  "Destruction VString adr ="  <<  this  << endl;
}

VString& operator+=(VString& g, const VString& d){
    for(auto c: d.chaine) g.chaine.push_back(c);
    return g;
}

VString operator+(const VString& a, const VString& b){
    VString out = a;
    for(auto c: b.chaine) out.chaine.push_back(c);
    return out;
}

char VString::operator[](size_t index) const noexcept(false){
    if(index>chaine.size()) throw out_of_range("out of range");
    return chaine[index];
}
char& VString::operator[]( size_t index) noexcept(false){
    if(index>chaine.size()) throw out_of_range("out of range");
    return chaine[index];
}


ostream& operator<<(ostream& o, const VString& a){
    for (auto c: a.chaine) o<<c;
    return o;

}


istream& operator>>(istream& i, VString& a)
{
    char c ;
    a.chaine.clear() ;

    while(i.get(c) && c != ' ' && c != '\n' && c != '\t')
    {
            a.chaine.push_back(c);
    }
    return i ;
}

size_t VString::size(){
    return chaine.size();
}


