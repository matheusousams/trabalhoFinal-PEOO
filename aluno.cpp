#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>
#include <iomanip>
#include <fstream>
#include "aluno.h"

using namespace std;

//Construtor
template<typename T>
Aluno<T>::Aluno(){}

//Destrutor
template<typename T>
Aluno<T>::~Aluno(){}

//Métodos Aluno
template<typename T>
void Aluno<T>::setNomeAluno(string nomeAluno){

	this->nomeAluno = nomeAluno;

}

template<typename T>
void Aluno<T>::setIdadeAluno(int idadeAluno){

	this->idadeAluno = idadeAluno;

}

template<typename T>
void Aluno<T>::setSexoAluno(string sexoAluno){

	this->sexoAluno = sexoAluno;

}

template<typename T>
void Aluno<T>::setTelefoneAluno(string telefoneAluno){

	this->telefoneAluno = telefoneAluno;

}

template<typename T>
void Aluno<T>::setEmailAluno(string emailAluno){

	this->emailAluno = emailAluno;

}

template<typename T>
void Aluno<T>::setCpfAluno(string cpfAluno){

	this->cpfAluno = cpfAluno;

}

template<typename T>
void Aluno<T>::setCursoAluno(string cursoAluno){

	this->cursoAluno = cursoAluno;

}

template<typename T>
void Aluno<T>::setMedia(T media){

	this->media = media;

}

template<typename T>
string Aluno<T>::getNomeAluno(){

	return nomeAluno;

}

template<typename T>
int Aluno<T>::getIdadeAluno(){

	return idadeAluno;

}

template<typename T>
string Aluno<T>::getSexoAluno(){

	return sexoAluno;

}

template<typename T>
string Aluno<T>::getTelefoneAluno(){

	return telefoneAluno;

}
template<typename T>
string Aluno<T>::getEmailAluno(){

	return emailAluno;

}

template<typename T>
string Aluno<T>::getCpfAluno(){

	return cpfAluno;

}

template<typename T>
string Aluno<T>::getCursoAluno(){

	return cursoAluno;

}

template<typename T>
T Aluno<T>::getMedia(){

	return media;

}

template<typename T>
void Aluno<T>::calcularMedia(){

	vector<T> notas(4);
	T media = 0.0;
	int i;

	for (i = 0; i < 4; i++){
		
		cin >> notas[i];
		media += notas[i];
		
	}

	media /= 4.0;
	
	setMedia(media);

	cout << getMedia();

}

template<typename U>
ostream& operator << (ostream& os, const Aluno<U>& alu){

	os << "Nome do Aluno: " << alu.nomeAluno << endl;
	os << "Idade do Aluno: " << alu.idadeAluno << " anos"<< endl;
	os << "Sexo do Aluno: " << alu.sexoAluno << endl;
	os << "Telefone do Aluno: " << alu.telefoneAluno << endl;
	os << "Email do Aluno: " << alu.emailAluno << endl;
	os << "Cpf do Aluno: " << alu.cpfAluno << endl;
	os << "Curso do Aluno: " << alu.cursoAluno << endl;
	os << "Media do Aluno: " << alu.media << endl;
	os << endl;
			
	return os;

}

template<typename U>
istream& operator >> (istream& is, Aluno<U>& alu){

	is >> alu.getNomeAluno() >> alu.getIdadeAluno() >> alu.getSexoAluno() >> alu.getTelefoneAluno() >> alu.getEmailAluno() >> alu.getCpfAluno() >> alu.getCursoAluno();
	
	return is;

}

