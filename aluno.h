#ifndef ALUNO_H_INCLUDED
#define ALUNO_H_INCLUDED

using namespace std;

template<class T>
class Aluno {

	private :

		string nomeAluno;
		int idadeAluno;
		string sexoAluno;
		string telefoneAluno;
		string emailAluno;
		string cpfAluno;
		string cursoAluno;
		T media;

	public :
		
		Aluno();
		~Aluno();
		void setNomeAluno(string nome);
		void setIdadeAluno(int idade);
		void setSexoAluno(string sexo);
		void setTelefoneAluno(string telefone);
		void setEmailAluno(string email);
		void setCpfAluno(string cpf);
		void setCursoAluno(string cursoAluno);
		void setMedia(T media);
		void calcularMedia();
		string getNomeAluno();
		int getIdadeAluno();
		string getSexoAluno();
		string getTelefoneAluno();
		string getEmailAluno();
		string getCpfAluno();
		string getCursoAluno();
		T getMedia();

		template <typename U> 
		friend ostream& operator << (ostream& os, const Aluno<U>& alu);
		
		template <typename U> 
		friend istream& operator >> (istream& is, Aluno<U>& alu);	
};

#endif