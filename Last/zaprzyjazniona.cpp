 #include <iostream>
 using namespace std;

 class Klasa                                   //CHODZI O TO ZE ZA POMOCA
 {                                             //ZAPRZYJAZNIONEJ MOZEMY MODYFIKOWAC SEKCJE PRYWATNA
public:
   friend void zaprzyjazniona( Klasa& );
private:
     int x;
 };

 void zaprzyjazniona( Klasa& obiekt ) //NIE ODWOLUJEMY SIE JAK DO ZWYKLEJ METODY (void Klasa::zaprzyjaüniona())
 {
   obiekt.x = 12;
   cout << obiekt.x << endl;
 }
 int main()
 {
     Klasa obiekt;
     zaprzyjazniona(obiekt);
}
