/**
 * \class Sz�rny
 * 
 * \brief Sz�rny class
 * 
 * \author Hab�n Andr�s, Tranta M�t�, T�th Nroerbert
 * 
 * Created on: 2020/10/14 17:15
*/
#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<vector>

class Szorny
{
public:
	Szorny(std::string nev, int hp, int dmg,double speed) :nev(nev), hp(hp), dmg(dmg),speed(speed) {} 
	int getDmg()const;
	int getHp()const;
	static void harc(Szorny &,Szorny &);
	double getSpeed()const;
	std::string getName()const;	
	static Szorny parseUnit(const std::string);
private:
	std::string nev;
	int hp;
	int dmg;
	double speed;
	void tamad(Szorny &)const;
};
