#ifndef FUNCIONARIO_H_INCLUDED
#define FUNCIONARIO_H_INCLUDED

using namespace std;

class Funcionario {

	protected :

		string nome;
		int idade;
		string sexo;
		string telefone;
		string email;
		string cpf;
		string cargo;
		double salario;
		
	public :
		
		Funcionario();
		~Funcionario();
		void setNome(string nome);
		void setIdade(int idade);
		void setSexo(string sexo);
		void setTelefone(string telefone);
		void setEmail(string email);
		void setCpf(string cpf);
		void setCargo(string cargo);
		void setSalario(double salario);
		string getNome();
		int getIdade();
		string getSexo();
		string getTelefone();
		string getEmail();
		string getCpf();
		string getCargo();
		double getSalario();
		friend ostream& operator << (ostream& os, const Funcionario& func);
		friend istream& operator >> (istream& is, Funcionario& func);

};

#endif