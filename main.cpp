#include <iostream>
#include "VString.h"
using namespace std;

int main()
{
    //4.4 Construction Deconstruction
    VString x = "bonjour";
    x.debug();
    VString y("Salut");
    y.debug();
    VString z{"coucou"};
    z.debug();


    cout<< "\n\n\n" <<endl;
    //4.5 Etude du mécanisme de construction/deconstruction
    VString a,b;
    VString milou = "je suis tintin mais je ne suis pas tintin";



    cout<< "\n\n\n" <<endl;
    //4.6 Creation des operateurs
    VString a2 = "aa", b2 = "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb";
    a2+=b2;
    a2.debug();
    a2+= "zz";
    a2.debug();


    try{
        VString s="xxx";
        s.debug();
        s[0]='c';
        char *p = &s[0];
        cout << "s[2] = " << *p << endl ;
        s+= "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
        cout << "s[2] = " << *p << endl;

    }
    catch(out_of_range& error){
        cout << error.what() << endl;
    }



    VString a3="aa", b3="bb",c;
    cout << a3 << b3 << endl;
    cout << a3.size() << endl;

    VString a4;
    while (cin>>a4)
       cout << a4 << endl;


   return 0;
}

