#include <vector>
#include <iostream>
using namespace std ;

class VString
{
private:
    vector<char> chaine;
public:
    VString() ;
    VString(const char x[]) ;
    void debug() ;
    ~VString();
    friend VString& operator+=(VString& g, const VString& d);
    friend VString operator+(const VString& a, const VString& b);

    char operator[](size_t index) const noexcept(false);
    char& operator[]( size_t index) noexcept(false);

    friend ostream& operator<<(ostream& o, const VString& a);
    friend istream& operator>>(istream& i,  VString& a);

    size_t size();


};
