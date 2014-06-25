#ifndef ELEMENT_H
#define ELEMENT_H
#include <iostream>
#include <stdio.h>
using namespace std;

class element
{
    public:
        element();
        ~element();
        virtual void getName();
		virtual string setName();
		virtual void wymuszenieUI(float,float) =0;
		friend int obwod(element*,element*);
    protected:
        float prad; float napiecie; float moc; float czestotliwosc; string nazwa;
    private:
};

class rezystor : public element
{
	public:
		rezystor();
		rezystor(string,float);
		~rezystor();
		void wymuszenieUI(float,float);
	private:
        float prad; float napiecie; float moc; float czestotliwosc; string nazwa; float rezystancja;
};

class cewka : public element
{
	public:
		cewka();
		cewka(string,float);
		~cewka();
		void wymuszenieUI(float,float);
	private:
        float prad; float napiecie; float moc; float czestotliwosc; string nazwa; float indukcyjnosc;
};

class kondensator : public element
{
	public:
		kondensator();
		kondensator(string,float);
		~kondensator();
		void wymuszenieUI(float,float);
	private:
        float prad; float napiecie; float moc; float czestotliwosc; string nazwa; float pojemnosc;
};




#endif // ELEMENT_H
