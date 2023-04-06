
#include <stdio.h>

int main()
{
    struct
    {
        int matricula;
        char nome [30];
        char dataNasc [11];
        char cargo [20];
        float salario;
    }func;
    printf("\n\nDigite a matricula: ");
     scanf("%i", &func.matricula);
    printf("\n\nDigite o nome: ");
     scanf("%s", &func.nome);
    printf("\n\nDigite a Data Nascimento: "); 
     scanf("%s", &func.dataNasc);
    printf("\n\nDigite o cargo: ");  
     scanf("%s", &func.cargo);
    printf("\n\nDigite o salario: "); 
     scanf("%f", &func.salario);
     
    printf("\n\nFuncionario: %s", func.nome); 
    printf("\n\nMatricula:%i", func.matricula);
    printf("\n\nNascimento:%s", func.dataNasc);
    printf("\n\nCargo:%s", func.cargo);
    printf("\n\nSalario:%f", func.salario );
    return 0;
}
