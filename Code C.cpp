#include <stdio.h>
#include <stdlib.h>
void cadastroEquipamento();
void cadastroEndereco();

void menu()
{
	printf ("---== LocaSystems ==---\n\n");
	int opcaoMenu = 0;
	printf("Selecione uma opcao abaixo:\n");
	printf("1) Equipamentos\n");
	printf("2) Enderecos\n");
	printf("0) Sair\n\n");
	scanf ("%d", &opcaoMenu);
	
	switch(opcaoMenu)
	{
		case 1:
			system("cls");
			cadastroEquipamento();
			break;
		case 2:
			system("cls");
			cadastroEndereco();
			break;
		case 0:
			break;
	}
}

void cadastroEquipamento()
{
	struct equipamentos
	{
		int idEquipamento, quantidade;
		char nome[50], descricao[100], modelo[50];
	};
	
	FILE *arquivoEquipamento;
	int opcaoMenu;
	struct equipamentos equipamento;
	
	printf("-----=== Cadastro de Equipamentos ===-----\n\n");
	printf("Selecione uma opção abaixo:\n");
	printf("1) Cadastrar Equipamento\n");
	printf("2) Ler Dados\n");
	printf("0) Voltar\n\n");
	scanf ("%d", &opcaoMenu);
	
	switch(opcaoMenu)
	{
	
	case 1:
		system("cls");
		arquivoEquipamento = fopen("equipamentos.txt", "r");
		
		if (arquivoEquipamento)
		{
			arquivoEquipamento = fopen("equipamentos.txt", "a");
			equipamento.idEquipamento++;
			fprintf(arquivoEquipamento, "---==---\nid: %d; \n", equipamento.idEquipamento);
			printf("Digite o nome do equipamento:\n");
			scanf ("%s", &equipamento.nome);
			fprintf(arquivoEquipamento, "Nome: %s; \n", equipamento.nome);
			printf("Digite uma descricao para o equipamento:\n");
			scanf ("%s", &equipamento.descricao);
			fprintf(arquivoEquipamento, "Descricao: %s \n", equipamento.descricao);
			printf("Digite o modelo do equipamento:\n");
			scanf ("%s", &equipamento.modelo);
			fprintf(arquivoEquipamento, "Modelo: %s \n", equipamento.modelo);
			printf("Digite a quantidade:\n");
			scanf ("%d", &equipamento.quantidade);
			fprintf(arquivoEquipamento, "Quantidade: %d \n\n", equipamento.quantidade);
		} else {
			arquivoEquipamento = fopen("equipamentos.txt", "w");
			equipamento.idEquipamento++;
			fprintf(arquivoEquipamento, "---==---\nid: %d; \n", equipamento.idEquipamento);
			printf("Digite o nome do equipamento:\n");
			scanf ("%s", &equipamento.nome);
			fprintf(arquivoEquipamento, "Nome: %s; \n", equipamento.nome);
			printf("Digite uma descricao para o equipamento:\n");
			scanf ("%s", &equipamento.descricao);
			fprintf(arquivoEquipamento, "Descricao: %s \n", equipamento.descricao);
			printf("Digite o modelo do equipamento:\n");
			scanf ("%s", &equipamento.modelo);
			fprintf(arquivoEquipamento, "Modelo: %s \n", equipamento.modelo);
			printf("Digite a quantidade:\n");
			scanf ("%d", &equipamento.quantidade);
			fprintf(arquivoEquipamento, "Quantidade: %d \n\n", equipamento.quantidade);
		}
		fclose(arquivoEquipamento);
		system("cls");
		printf("DADOS SALVOS COM SUCESSO!");
		system("pause");
		system("cls");
		menu();
		break;
		
	case 2:
		system("cls");
		arquivoEquipamento = fopen("equipamentos.txt", "r");
		char lerDados[100000];
		while (fgets(lerDados, 100000, arquivoEquipamento) != NULL)
		{
			printf ("%s", lerDados);
		}
		fclose(arquivoEquipamento);
		system("pause");
		system("cls");
		menu();
		break;

	case 0:
		system("cls");
		system("pause");
		menu();
		break;
	}
}

void cadastroEndereco()
{
	struct enderecos
	{
		int idEndereco, numero;
		char cidade[50], estado[50], bairro[50], rua[100];
	};
	
	FILE *arquivoEndereco;
	int opcaoMenu;
	struct enderecos endereco;
	
	printf("-----=== Cadastro de Enderecos ===-----\n\n");
	printf("Selecione uma opção abaixo:\n");
	printf("1) Cadastrar Endereco\n");
	printf("2) Ler Dados\n");
	printf("0) Voltar\n\n");
	scanf ("%d", &opcaoMenu);
	
	switch(opcaoMenu)
	{
	
	case 1:
		system("cls");
		arquivoEndereco = fopen("enderecos.txt", "r");
		
		if (arquivoEndereco)
		{
			arquivoEndereco = fopen("enderecos.txt", "a");
			endereco.idEndereco++;
			fprintf(arquivoEndereco, "---==---\nid: %d; \n", endereco.idEndereco);
			printf("Digite o nome da rua:\n");
			scanf ("%s", &endereco.rua);
			fprintf(arquivoEndereco, "Rua: %s; \n", endereco.rua);
			printf("Digite o nome do bairro:\n");
			scanf ("%s", &endereco.bairro);
			fprintf(arquivoEndereco, "Bairro: %s \n", endereco.bairro);
			printf("Digite o nome da cidade:\n");
			scanf ("%s", &endereco.cidade);
			fprintf(arquivoEndereco, "Cidade: %s \n", endereco.cidade);
			printf("Digite o estado:\n");
			scanf ("%s", &endereco.estado);
			fprintf(arquivoEndereco, "Estado: %s \n", endereco.estado);
			printf("Digite o numero da casa:\n");
			scanf ("%d", &endereco.numero);
			fprintf(arquivoEndereco, "Numero: %d \n\n", endereco.numero);
		} else {
			arquivoEndereco = fopen("enderecos.txt", "w");
			endereco.idEndereco++;
			fprintf(arquivoEndereco, "---==---\nid: %d; \n", endereco.idEndereco);
			printf("Digite o nome da rua:\n");
			scanf ("%s", &endereco.rua);
			fprintf(arquivoEndereco, "Rua: %s; \n", endereco.rua);
			printf("Digite o nome do bairro:\n");
			scanf ("%s", &endereco.bairro);
			fprintf(arquivoEndereco, "Bairro: %s \n", endereco.bairro);
			printf("Digite o nome da cidade:\n");
			scanf ("%s", &endereco.cidade);
			fprintf(arquivoEndereco, "Cidade: %s \n", endereco.cidade);
			printf("Digite o estado:\n");
			scanf ("%s", &endereco.estado);
			fprintf(arquivoEndereco, "Estado: %s \n", endereco.estado);
			printf("Digite o numero da casa:\n");
			scanf ("%d", &endereco.numero);
			fprintf(arquivoEndereco, "Numero: %d \n\n", endereco.numero);
		}
		fclose(arquivoEndereco);
		system("cls");
		printf("DADOS SALVOS COM SUCESSO!");
		system("pause");
		system("cls");
		menu();
		break;
		
	case 2:
		system("cls");
		arquivoEndereco = fopen("enderecos.txt", "r");
		char lerDados[100000];
		while (fgets(lerDados, 100000, arquivoEndereco) != NULL)
		{
			printf ("%s", lerDados);
		}
		fclose(arquivoEndereco);
		system("pause");
		system("cls");
		menu();
		break;

	case 0:
		system("cls");
		system("pause");
		menu();
		break;
	}
}



int main()
{
	menu();
	return 0;	
}
