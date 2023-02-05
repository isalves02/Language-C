/******************************************************************************

Cálculo do salário líquido e bruto

******************/
#include <stdio.h>
int main()
{
    
    int horasTrabalhadas, op, opInternal, i = 0;
    float valorHora, percentualDesconto;
    
    printf("1. Preencher os dados \t\t");
    printf("2. Finalizar o programa \n");
    scanf("%d", &op);
    
    
    switch(op) {
        case 1:
            printf("Digite quantidade horas de trabalhadas por semana: ");
            scanf("%d", &horasTrabalhadas);
            
            if(horasTrabalhadas>168) {
                printf("INVÁLIDO! Digite uma quantidade válida de horas por semana: ");
                scanf("%d", &horasTrabalhadas);
            }
            
            printf("Digite o valor/hora que é cobrado: ");
            scanf("%f", &valorHora);
    
            printf("Digite a porcentagem do imposto mensal: ");
            scanf("%f", &percentualDesconto);
            
            float salarioBruto = (horasTrabalhadas * 4) * valorHora;
            
            printf("\n1. Exibir o salário bruto do docente \t\t");
            printf("1. Exibir o salário líquido do docente \n");
            scanf("%d", &opInternal);
            
            switch(opInternal) {
                case 1:
                    printf("O valor salário bruto é R$%f", salarioBruto);
                    break;
                case 2: 
                    printf("O salário líquido corresponde a: R$%f", (percentualDesconto/100) * salarioBruto);
                    break;
            }

        case 2: 
            i++;
            break;

    } while (i==0);
        
    return 0;
}
