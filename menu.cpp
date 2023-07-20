#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>

using namespace std;

int menuPrincipal();

int menuCadastro(){
	int op;

	while(op != 4){

		cout << "\n\t\t\t\t\tSelecione quem deseja cadastrar:\n" << endl;
		cout << "\t\t\t\t\t1 -> Funcionario;\n" << endl;
		cout << "\t\t\t\t\t2 -> Professor;\n" << endl;
		cout << "\t\t\t\t\t3 -> Aluno;\n" << endl;
		cout << "\t\t\t\t\t4 -> Retornar ao menu anterior;\n" << endl;
		cout << "\t\t\t\t\t5 -> Sair do Programa.\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> op;
		
		switch(op){
			case 1:
			{
				Funcionario func;

				string aux;
				string nome;
				int idade, i;
				string sexo;
				string telefone;
				string email;
				string cpf;
				string cargo;
				double salario;
				bool error;

				ofstream ofs("arquivo-funcionario.txt", fstream::app);

				system("clear");
				cout << "\n\t\t\tPreencha os campos abaixo para cadastrar o Funcionario :\n";

				cout << "\n\t\t\tDigite o nome do Funcionario: ";
				cin.ignore();
				do{
					error = false;
					getline(cin, nome);
					for(i = 0; i < nome.length(); i++){
						if(!isblank(nome[i]) && !isalpha(nome[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme a idade do Funcionario: ";
				do{
					error = false;
					getline(cin, aux);
					for(i = 0; i < aux.length(); i++){
						if(!isdigit(aux[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				idade = atoi(aux.c_str());
				
				cout << "\n\t\t\tInforme o sexo do Funcionario: ";
				do{
					error = false;
					getline(cin,sexo);
					for(i = 0; i < sexo.length(); i++){
						if(!isalpha(sexo[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o telefone do Funcionario: ";
				do{
					error = false;
					getline(cin,telefone);
					for(i = 0; i < telefone.length(); i++){
						if(!isdigit(telefone[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);

				cout << "\n\t\t\tInforme o email do Funcionario: ";
				do{
					error = false;
					getline(cin,email);
					for(i = 0; i < email.length(); i++){
						if(!ispunct(email[i]) && !isalpha(email[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o cpf do Funcionario: ";
				do{
					error = false;
					getline(cin,cpf);
					for(i = 0; i < cpf.length(); i++){
						if(!isdigit(cpf[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o cargo do Funcionario: ";
				do{
					error = false;
					getline(cin,cargo);
					for(i = 0; i < cargo.length(); i++){
						if(!isblank(cargo[i]) && !isalpha(cargo[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o salario do Funcionario: ";
				do{
					error = false;
					getline(cin, aux);
					for(i = 0; i < aux.length(); i++){
						if(!isdigit(aux[i]) && !ispunct(aux[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				salario = atof(aux.c_str());

				cout << endl;

				try{

					if(nome != "" && idade > 0 && sexo != "" && telefone != "" && email != "" && cpf != "" && cargo != "" && salario > 0.0){

						func.setNome(nome);
						func.setIdade(idade);
						func.setSexo(sexo);
						func.setTelefone(telefone);
						func.setEmail(email);
						func.setCpf(cpf);
						func.setCargo(cargo);
						func.setSalario(salario);

						ofs << func;

						ofs.close();
					
					}else{

						throw "Erro ao cadastrar";

					}

				}catch(const char* e){

					cout << endl << e << endl;

				}

				break;
			}
			case 2:
			{
				Professor prof;

				string aux;
				string nome;
				int idade, i;
				string sexo;
				string telefone;
				string email;
				string cpf;
				string curso;
				double salario;
				bool error;

				ofstream ofs("arquivo-professor.txt", fstream::app);

				system("clear");
				cout << "\n\t\t\tPreencha os campos abaixo para cadastrar o professor :\n";

				cout << "\n\t\t\tDigite o nome do Professor: ";
				cin.ignore();
				do{
					error = false;
					getline(cin, nome);
					for(i = 0; i < nome.length(); i++){
						if(!isblank(nome[i]) && !isalpha(nome[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme a idade do Professor: ";
				do{
					error = false;
					getline(cin, aux);
					for(i = 0; i < aux.length(); i++){
						if(!isdigit(aux[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				idade = atoi(aux.c_str());
				
				cout << "\n\t\t\tInforme o sexo do Professor: ";
				do{
					error = false;
					getline(cin,sexo);
					for(i = 0; i < sexo.length(); i++){
						if(!isalpha(sexo[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o telefone do Professor: ";
				do{
					error = false;
					getline(cin,telefone);
					for(i = 0; i < telefone.length(); i++){
						if(!isdigit(telefone[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o email do Professor: ";
				do{
					error = false;
					getline(cin,email);
					for(i = 0; i < email.length(); i++){
						if(!ispunct(email[i]) && !isalpha(email[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o cpf do Professor: ";
				do{
					error = false;
					getline(cin,cpf);
					for(i = 0; i < cpf.length(); i++){
						if(!isdigit(cpf[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
								
				cout << "\n\t\t\tCursos Disponiveis: Arbitragem | Gandula | Jogador | Treinador\n";
				cout << "\n\t\t\tInforme o curso lecionado: ";
				do{
					error = false;
					getline(cin,curso);
					for(i = 0; i < curso.length(); i++){
						if(!isblank(curso[i]) && !isalpha(curso[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o salario do Professor: ";
				do{
					error = false;
					getline(cin, aux);
					for(i = 0; i < aux.length(); i++){
						if(!isdigit(aux[i]) && !ispunct(aux[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				salario = atof(aux.c_str());
				
				system("clear");
				cout << endl;

				try{

					if(nome != "" && idade > 0 && sexo != "" && telefone != "" && email != "" && cpf != "" && curso != "" && salario > 0.0){

						prof.setNome(nome);
						prof.setIdade(idade);
						prof.setSexo(sexo);
						prof.setTelefone(telefone);
						prof.setEmail(email);
						prof.setCpf(cpf);
						prof.setCurso(curso);
						prof.setSalario(salario);

						ofs << prof;

						ofs.close();
					
					} else{

						throw "Erro ao cadastrar";

					}

				}catch(const char* e){

					cout << endl << e << endl;

				}

				break;
			}
			case 3:
			{
				string aux;
				Aluno<double> alun;
				string nomeAluno;
				int idadeAluno, i;
				string sexoAluno;
				string telefoneAluno;
				string emailAluno;
				string cpfAluno;
				string cursoAluno;
				double Media;
				bool error;

				ofstream ofs("arquivo-aluno.txt", fstream::app);

				system("clear");
				cout << "\n\t\t\tPreencha os campos abaixo para cadastrar o Aluno :\n";

				cout << "\n\t\t\tDigite o nome do Aluno: ";
				cin.ignore();
				do{
					error = false;
					getline(cin, nomeAluno);
					for(i = 0; i < nomeAluno.length(); i++){
						if(!isblank(nomeAluno[i]) && !isalpha(nomeAluno[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme a idade do Aluno: ";
				do{
					error = false;
					getline(cin, aux);
					for(i = 0; i < aux.length(); i++){
						if(!isdigit(aux[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				idadeAluno = atoi(aux.c_str());
				
				cout << "\n\t\t\tInforme o sexo do Aluno: ";
				//cin.ignore();
				do{
					error = false;
					getline(cin,sexoAluno);
					for(i = 0; i < sexoAluno.length(); i++){
						if(!isalpha(sexoAluno[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o telefone do Aluno: ";
				do{
					error = false;
					getline(cin,telefoneAluno);
					for(i = 0; i < telefoneAluno.length(); i++){
						if(!isdigit(telefoneAluno[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o email do Aluno: ";
				do{
					error = false;
					getline(cin,emailAluno);
					for(i = 0; i < emailAluno.length(); i++){
						if(!ispunct(emailAluno[i]) && !isalpha(emailAluno[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme o cpf do Aluno: ";
				do{
					error = false;
					getline(cin,cpfAluno);
					for(i = 0; i < cpfAluno.length(); i++){
						if(!isdigit(cpfAluno[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
				}while(error);

				cout << "\n\t\t\tCursos Disponiveis: Arbitragem | Gandula | Jogador | Treinador\n";
				cout << "\n\t\t\tInforme o curso do Aluno: ";
				do{
					error = false;
					getline(cin,cursoAluno);
					for(i = 0; i < cursoAluno.length(); i++){
						if(!isblank(cursoAluno[i]) && !isalpha(cursoAluno[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas letras" << endl;
							break;
						}
					}
				}while(error);
				
				cout << "\n\t\t\tInforme 4 notas do Aluno (uma por uma):";
				Media = 0.0;
				int cont = 0;
				do{
					error = false;
					getline(cin, aux);
					for(i = 0; i < aux.length(); i++){
						if(!isdigit(aux[i]) && !ispunct(aux[i])){
							error = true;
							cout << "\t\t\t\tDigite apenas numeros" << endl;
							break;
						}
					}
					if(!error){
						Media += atof(aux.c_str());
						cont++;
					}
				}while(error || cont < 4);	//recebe as 4 notas
				Media /= 4;	//media das notas

				system("clear");
				cout << endl;

				try{
				
					if(nomeAluno != "" && idadeAluno > 0 && sexoAluno != "" && telefoneAluno != "" && emailAluno != "" && cpfAluno != "" && cursoAluno != ""){
						
						alun.setNomeAluno(nomeAluno);
						alun.setIdadeAluno(idadeAluno);
						alun.setSexoAluno(sexoAluno);
						alun.setTelefoneAluno(telefoneAluno);
						alun.setEmailAluno(emailAluno);
						alun.setCpfAluno(cpfAluno);
						alun.setCursoAluno(cursoAluno);
						alun.setMedia(Media);

						ofs << alun;

						ofs.close();

					} else {
						throw "Erro ao cadastrar";
					}	
				}
				
				catch(const char* e){
					cout << endl << e << endl;
				}
				break;
			}
			case 4:
			{
				system("clear");
				menuPrincipal();
				break;
			}	
			case 5:
			{
				exit(0);
			}
			default:
			{
				system("clear");
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
			}	
		}
	}
}

void buscar(){
	int opcao;

	while(opcao != 4){
		cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELE ##########:\n" << endl;
		cout << "\n\n\t\t\t\tSelecione um dos itens abaixo que deseja buscar:\n" << endl;
		cout << "\t\t\t\t\t1 -> Funcionario;\n" << endl;
		cout << "\t\t\t\t\t2 -> Professor;\n" << endl;
		cout << "\t\t\t\t\t3 -> Aluno;\n" << endl;
		cout << "\t\t\t\t\t4 -> Retornar ao menu anterior;\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> opcao;

		switch(opcao){
			case 1:
			{
				cin.ignore();	//buffer quebra de linha '\n'

				ifstream ofs("arquivo-funcionario.txt", ios::in);
				try{
					if(!ofs){
						system("clear");
						throw "Arquivo nao encontrado";
					}else{
						string temp1, temp2, temp3;
						bool achou = false;
						int cont = 0;
						
						cout << "Nome: ";
						getline(cin, temp1);
						temp1.insert(0, "Nome: ");	//formata o nome do funcionario para o arquivo
						system("clear");
						
						while(!ofs.eof()){
							getline(ofs, temp3);
							if((temp3.find(temp1) != string::npos) || temp1 == temp3){	//busca uma substring ou a string completa
								achou = true;
							}
							if(achou && (cont < 8)){
								cout << temp3 << endl;
								cont++;
							}
						}
						if(!achou){
							cout << "\n\t\t\t\t\tFuncionario nao encontrado." << endl;
						}
					}
				}
				catch(const char* e){
					cout << endl << e << endl;
				}
			}
			break;
			case 2:
			{
				cin.ignore();	//buffer quebra de linha '\n'
				ifstream ofs("arquivo-professor.txt", ios::in);
				try{
					if(!ofs){
						system("clear");
						throw "Arquivo nao encontrado";
					}else{
						string temp1, temp2, temp3;
						bool achou = false;
						int cont = 0;

						cout << "Nome: ";
						getline(cin, temp1);
						temp1.insert(0,"Nome: ");	//formata o nome do professor para o arquivo
						system("clear");
						
						while(!ofs.eof()){
							getline(ofs, temp3);
							if((temp3.find(temp1) != string::npos) || temp1 == temp3){	//busca uma substring ou a string completa
								achou = true;
							}
							if(achou && (cont < 8)){
								cout << temp3 << endl;
								cont++;
							}
						}
						if(!achou){
							cout << "\n\t\t\t\t\tProfessor nao encontrado." << endl;
						}
					}
				}
				catch(const char* e){
					cout << endl << e << endl;
				}
			}
			break;
			case 3:
			{
				cin.ignore();	//buffer quebra de linha '\n'
				ifstream ofs("arquivo-aluno.txt", ios::in);
				try{
					if(!ofs){
						system("clear");
						throw "Arquivo nao encontrado";
					}else{
						string temp1, temp2, temp3;
						bool achou = false;
						int cont = 0;

						cout << "Nome: ";
						getline(cin, temp1);
						temp1.insert(0,"Nome do Aluno: ");	//formata o nome do aluno para o arquivo
						system("clear");
						
						while(!ofs.eof()){
							getline(ofs, temp3);
							if((temp3.find(temp1) != string::npos) || temp1 == temp3){	//busca uma substring ou a string completa
								achou = true;
							}
							if(achou && (cont < 8)){
								cout << temp3 << endl;
								cont++;
							}
						}
						if(!achou){
							cout << "\n\t\t\t\t\tAluno nao encontrado." << endl;
						}
					}
				}
				catch(const char* e){
					cout << endl << e << endl;
				}
			}
			break;		
			case 4:
				system("clear");
				menuPrincipal();
			break;
			default:
				system("clear");
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;

				break;
		}
	}
}

void remover(){
	int opcao;

	while(opcao != 4){
		cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELE ##########:\n" << endl;
		cout << "\n\n\t\t\t\tSelecione um dos itens abaixo que deseja remover:\n" << endl;
		cout << "\t\t\t\t\t1 -> Funcionario;\n" << endl;
		cout << "\t\t\t\t\t2 -> Professor;\n" << endl;
		cout << "\t\t\t\t\t3 -> Aluno;\n" << endl;
		cout << "\t\t\t\t\t4 -> Retornar ao menu anterior;\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> opcao;

		switch(opcao){
			case 1:
			{
				cin.ignore();
				ifstream ofs("arquivo-funcionario.txt", ios::in);
				try{
					if(!ofs){
						throw "Arquivo nao encontrado";
					}else{
						ofstream temp("temp.txt", ios::out);
						string temp1, temp2, temp3;
						bool achou = false;
						int cont = 0;

						cout << "Nome: ";
						getline(cin, temp1);	//linha para remover
						temp1.insert(0,"Nome: ");

						while(!ofs.eof()){
							getline(ofs, temp3);
							if(temp1 == temp3){
								achou = true;
							}
							if(achou && (cont < 9)){	//pula as linhas referentes ao que sera excluido
								cont++;
							}
							if(!achou || cont > 8){	//copia as linhas do arquivo em um temporario
								temp << temp3 << endl;
							}
						}

						if(achou){
							system("clear");
							cout << "\n\t\t\t\t\tRemovido." << endl;
						}else{
							system("clear");
							cout << "\n\t\t\t\t\tFuncionario nao encontrado." << endl;
						}

						ofs.close();
						temp.close();
						remove("arquivo-funcionario.txt");
						rename("temp.txt","arquivo-funcionario.txt");
					}
				}
				catch(const char* e){
					cout << endl << e << endl;
				}
			}
			break;
			case 2:
			{
				cin.ignore();
				ifstream ofs("arquivo-professor.txt", ios::in);
				try{
					if(!ofs){
						throw "Arquivo nao encontrado";
					}else{
						ofstream temp("temp.txt", ios::out);				
						string temp1, temp2, temp3;
						bool achou = false;
						int cont = 0;

						cout << "Nome: ";
						getline(cin, temp1);	//linha para remover
						temp1.insert(0,"Nome: ");

						while(!ofs.eof()){
							getline(ofs, temp3);
							if(temp1 == temp3){
								achou = true;
							}
							if(achou && (cont < 9)){	//pula as linhas referentes ao que sera excluido
								cont++;
							}
							if(!achou || cont > 8){	//copia as linhas do arquivo em um temporario
								temp << temp3 << endl;
							}
						}
						if(achou){
							system("clear");
							cout << "\n\t\t\t\t\tRemovido." << endl;
						}else{
							system("clear");
							cout << "\n\t\t\t\t\tProfessor nao encontrado." << endl;
						}

						ofs.close();
						temp.close();
						remove("arquivo-professor.txt");
						rename("temp.txt","arquivo-professor.txt");
					}
				}
				catch(const char* e){
					cout << endl << e << endl;
				}
			}
			break;
			case 3:
			{
				cin.ignore();
				ifstream ofs("arquivo-aluno.txt", ios::in);
				try{
					if(!ofs){
						throw "Arquivo nao encontrado";
					}else{
						ofstream temp("temp.txt", ios::out);
						string temp1, temp2, temp3;
						bool achou = false;
						int cont = 0;

						cout << "Nome: ";
						getline(cin, temp1);	//linha para remover
						temp1.insert(0,"Nome do Aluno: ");

						while(!ofs.eof()){
							getline(ofs, temp3);
							if(temp1 == temp3){
								achou = true;
							}
							if(achou && (cont < 9)){	//pula as linhas referentes ao que sera excluido
								cont++;
							}
							if(!achou || cont > 8){	//copia as linhas do arquivo em um temporario
								temp << temp3 << endl;
							}
						}

						if(achou){
							system("clear");
							cout << "\n\t\t\t\t\tRemovido." << endl;
						}else{
							system("clear");
							cout << "\n\t\t\t\t\tAluno nao encontrado." << endl;
						}

						ofs.close();
						temp.close();
						remove("arquivo-aluno.txt");
						rename("temp.txt","arquivo-aluno.txt");
					}
				}
				catch(const char* e){
					cout << endl << e << endl;
				}
			}
			break;		
			case 4:
				system("clear");
				menuPrincipal();
			break;			
			default:
				system("clear");
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
		}
	}
}

void atualizaCliente(int entidade){
	int opcao, cont = 0;
	bool achou = false;
	string temp1, temp2, temp3;
	cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELE ##########:\n" << endl;
	cout << "\n\n\t\t\t\tSelecione um dos itens abaixo:\n" << endl;
	cout << "\t\t\t\t\t1 -> Alterar Nome;\n" << endl;
	cout << "\t\t\t\t\t2 -> Alterar Idade;\n" << endl;
	cout << "\t\t\t\t\t3 -> Alterar Sexo;\n" << endl;
	cout << "\t\t\t\t\t4 -> Alterar Telefone;\n" << endl;
	cout << "\t\t\t\t\t5 -> Alterar Email;\n" << endl;
	cout << "\t\t\t\t\t6 -> Alterar Cpf;\n" << endl;
	cout << "\t\t\t\t\t7 -> Alterar Cargo/Curso(Arbitragem | Gandula | Jogador | Treinador);\n" << endl;
	cout << "\t\t\t\t\t8 -> Alterar Salario/Media;\n" << endl;
	cout << "\t\t\t\t\tOpcao -> ";
	cin >> opcao;
	ofstream temp("temp.txt", ios::out);	//arquivo temporario

	if(entidade == 1){	//atualiza dados dos funcionarios
	ifstream ofs("arquivo-funcionario.txt", ios::in);
	
		try{
			if(!ofs){
				system("clear");
				throw "Arquivo nao encontrado";
			}else{
				cin.ignore();
				system("clear");
				cout << "Digite o nome do funcionario: ";
				getline(cin, temp1);
				temp1.insert(0,"Nome: ");	//formata o nome

				switch(opcao){	//dados que atualizarao os antigos
					case 1: cout << "Novo Nome: ";
							getline(cin, temp2);
							temp2.insert(0, "Nome: ");
					break;
					case 2: cout << "Nova Idade: ";
							getline(cin, temp2);
							temp2.insert(0, "Idade: ");		
					break;
					case 3: cout << "Novo Sexo: ";
							getline(cin, temp2);
							temp2.insert(0, "Sexo: ");
					break;
					case 4: cout << "Novo Telefone: ";
							getline(cin, temp2);
							temp2.insert(0, "Telefone: ");		
					break;
					case 5: cout << "Novo Email: ";
							getline(cin, temp2);
							temp2.insert(0, "Email: ");		
					break;
					case 6: cout << "Novo Cpf: ";
							getline(cin, temp2);
							temp2.insert(0, "Cpf: ");		
					break;
					case 7: cout << "Novo Cargo: ";
							getline(cin, temp2);
							temp2.insert(0, "Cargo: ");
					break;
					case 8: cout << "Novo Salario: ";
							getline(cin, temp2);
							temp2.insert(0, "Salario: ");
					break;
				}

				while(!ofs.eof()){
					getline(ofs, temp3);
					if(temp1 == temp3){
						achou = true;
					}
					if(achou && cont == (opcao-1)){	//atualiza a linha
						temp << temp2 << endl;
						cont++;
						continue;
					}
					if(achou){
						cont++;
					}
					temp << temp3 << endl;
				}

				if(achou){
					cout << "\n\t\t\t\t\tDados Atualizados." << endl;
				}else{
					cout << "\n\t\t\t\t\tFuncionario nao encontrado." << endl;
				}

				ofs.close();
				temp.close();
				remove("arquivo-funcionario.txt");
				rename("temp.txt","arquivo-funcionario.txt");
			}
		}
		catch(const char* e){
			cout << endl << e << endl;
		}
	}
	else if(entidade == 2){	//atualiza dados dos professores
	ifstream ofs("arquivo-professor.txt", ios::in);

		try{
			if(!ofs){
				system("clear");
				throw "Arquivo nao encontrado";
			}else{
				cin.ignore();
				system("clear");
				cout << "Digite o nome do professor: ";
				getline(cin, temp1);
				temp1.insert(0,"Nome: ");	//formata o nome

				switch(opcao){	//dados que atualizarao os antigos
					case 1: cout << "Novo Nome: ";
							getline(cin, temp2);
							temp2.insert(0, "Nome: ");
					break;
					case 2: cout << "Nova Idade: ";
							getline(cin, temp2);
							temp2.insert(0, "Idade: ");		
					break;
					case 3: cout << "Novo Sexo: ";
							getline(cin, temp2);
							temp2.insert(0, "Sexo: ");
					break;
					case 4: cout << "Novo Telefone: ";
							getline(cin, temp2);
							temp2.insert(0, "Telefone: ");		
					break;
					case 5: cout << "Novo Email: ";
							getline(cin, temp2);
							temp2.insert(0, "Email: ");		
					break;
					case 6: cout << "Novo Cpf: ";
							getline(cin, temp2);
							temp2.insert(0, "Cpf: ");		
					break;
					case 7: cout << "Novo Curso: ";
							getline(cin, temp2);
							temp2.insert(0, "Curso: ");
					break;
					case 8: cout << "Novo Salario: ";
							getline(cin, temp2);
							temp2.insert(0, "Salario: ");
					break;
				}

				while(!ofs.eof()){
					getline(ofs, temp3);
					if(temp1 == temp3){
						achou = true;
					}
					if(achou && cont == (opcao-1)){	//atualiza a linha
						temp << temp2 << endl;
						cont++;
						continue;
					}
					if(achou){
						cont++;
					}
					temp << temp3 << endl;
				}

				if(achou){
					cout << "\n\t\t\t\t\tDados Atualizados." << endl;
				}else{
					cout << "\n\t\t\t\t\tProfessor nao encontrado." << endl;
				}

				ofs.close();
				temp.close();
				remove("arquivo-professor.txt");
				rename("temp.txt","arquivo-professor.txt");
			}
		}
		catch(const char* e){
			cout << endl << e << endl;
		}
	}
	else{	//atualiza dados dos alunos
	ifstream ofs("arquivo-aluno.txt", ios::in);

		try{
			if(!ofs){
				system("clear");
				throw "Arquivo nao encontrado";
			}else{
				cin.ignore();
				system("clear");
				cout << "Digite o nome do aluno: ";
				getline(cin, temp1);
				temp1.insert(0,"Nome do Aluno: ");	//formata o nome

				switch(opcao){	//dados que atualizarao os antigos
					case 1: cout << "Novo Nome: ";
							getline(cin, temp2);
							temp2.insert(0, "Nome do Aluno: ");
					break;
					case 2: cout << "Nova Idade: ";
							getline(cin, temp2);
							temp2.insert(0, "Idade do Aluno: ");
					break;
					case 3: cout << "Novo Sexo: ";
							getline(cin, temp2);
							temp2.insert(0, "Sexo do Aluno: ");
					break;
					case 4: cout << "Novo Telefone: ";
							getline(cin, temp2);
							temp2.insert(0, "Telefone do Aluno: ");
					break;
					case 5: cout << "Novo Email: ";
							getline(cin, temp2);
							temp2.insert(0, "Email do Aluno: ");
					break;
					case 6: cout << "Novo Cpf: ";
							getline(cin, temp2);
							temp2.insert(0, "Cpf do Aluno: ");
					break;
					case 7: cout << "Novo Curso: ";
							getline(cin, temp2);
							temp2.insert(0, "Curso do Aluno: ");
					break;
					case 8: cout << "Nova Media: ";
							getline(cin, temp2);
							temp2.insert(0, "Media do Aluno: ");
					break;
				}

				while(!ofs.eof()){
					getline(ofs, temp3);
					if(temp1 == temp3){
						achou = true;
					}
					if(achou && cont == (opcao-1)){	//atualiza a linha
						temp << temp2 << endl;
						cont++;
						continue;
					}
					if(achou){
						cont++;
					}
					temp << temp3 << endl;
				}

				if(achou){
					cout << "\n\t\t\t\t\tDados Atualizados." << endl;
				}else{
					cout << "\n\t\t\t\t\tAluno nao encontrado." << endl;
				}

				ofs.close();
				temp.close();
				remove("arquivo-aluno.txt");
				rename("temp.txt","arquivo-aluno.txt");
			}
		}
		catch(const char* e){
			cout << endl << e << endl;
		}
	}
}

void atualizar(){
	int opcao;

	while(opcao != 4){
		cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELE ##########:\n" << endl;
		cout << "\n\n\t\t\t\tSelecione um dos itens abaixo que deseja atualizar:\n" << endl;
		cout << "\t\t\t\t\t1 -> Funcionario;\n" << endl;
		cout << "\t\t\t\t\t2 -> Professor;\n" << endl;
		cout << "\t\t\t\t\t3 -> Aluno;\n" << endl;
		cout << "\t\t\t\t\t4 -> Retornar ao menu anterior;\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> opcao;

		if(opcao == 1 ||opcao == 2 || opcao == 3){
			system("clear");
			atualizaCliente(opcao);
		}else if(opcao == 4){
			system("clear");
			menuPrincipal();
		}else{
			system("clear");
			cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
		}

	}
}

int menuPrincipal(){

	int opcao;

	while(opcao != 3){
		cout << "\n\n\t\t\t\t########## BEM-VINDO A ESCOLA DE FUTEBOL REI PELE ##########:\n" << endl;
		cout << "\n\n\t\t\t\tSelecione uma das opcoes abaixo que deseja ser executada:\n" << endl;
		cout << "\t\t\t\t\t1 -> Cadastrar(Funcionario, Professor ou Aluno);\n" << endl;
		cout << "\t\t\t\t\t2 -> Buscar(Funcionario, Professor ou Aluno);\n" << endl;
		cout << "\t\t\t\t\t3 -> Atualizar Info(Funcionario, Professor ou Aluno);\n" << endl;
		cout << "\t\t\t\t\t4 -> Remover(Funcionario, Professor ou Aluno);\n" << endl;
		cout << "\t\t\t\t\t5 -> Sair do Programa.\n" << endl;
		cout << "\t\t\t\t\tOpcao -> ";
		cin >> opcao; 
		
		switch(opcao){
			case 1:
				system("clear");
				menuCadastro();
			break;
			case 2:
				system("clear");
				buscar();
			case 3:
				system("clear");
				atualizar();
			break;
			case 4:
				system("clear");
				remover();
			break;
			case 5:			
				cout << "\n\t\t\t\t\tVolte sempre a melhor escolinha da UECE!" << endl;
				exit(0);
			break;		
			default:
				system("clear");
				cout <<"\nOpcao nao disponivel no momento, tente novamente." << endl;
		}
	}
	return 0;
}

