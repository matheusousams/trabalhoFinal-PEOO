#ifndef PROFESSOR_H_INCLUDED
#define PROFESSOR_H_INCLUDED
#include "funcionario.h"
using namespace std;

class Professor : public Funcionario {
	
	private :
		
		string curso;

	public :

		Professor();
		~Professor();
		Professor(string nome, int idade, string sexo, string telefone, string email, string cpf, double salario, string curso);
		void setCurso(string curso);
		string getCurso();
		friend ostream& operator << (ostream& os, const Professor& prof);
		friend istream& operator >> (istream& is, Professor& prof);

};

#endif