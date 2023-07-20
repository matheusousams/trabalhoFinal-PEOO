#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>
#include <iomanip>
#include <fstream>
#include <string.h>
#include "professor.h"
#include "funcionario.h"

using namespace std;

//Construtor
Professor::Professor(){}

//Destrutor
Professor::~Professor(){}

//Métodos Professor
void Professor::setCurso(string curso){

	this->curso = curso;

}

string Professor::getCurso(){

	return curso;

}

ostream& operator << (ostream& os, const Professor& prof){

	os << "Nome: " << prof.nome << endl;
	os << "Idade: " << prof.idade << endl;
	os << "Sexo: " << prof.sexo << endl;
	os << "Telefone: " << prof.telefone << endl;
	os << "Email: " << prof.email << endl;
	os << "Cpf: " << prof.cpf << endl;
	os << "Curso: " << prof.curso << endl;
	os << "Salario: " << prof.salario << endl;
	os << endl;
			
	return os;

}

istream& operator >> (istream& is, Professor& prof){

	is >> prof.nome;
	is >> prof.idade;
	is >> prof.sexo;
	is >> prof.telefone;
	is >> prof.email;
	is >> prof.cpf;
	is >> prof.curso;
	is >> prof.salario;
	
	return is;

}