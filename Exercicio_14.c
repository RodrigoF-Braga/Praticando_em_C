
int main()
{
    int matricula, ano_admissao, num_dependentes, ano_atual, tempo_servico;
    float salario, inss, imposto_renda,plano_saude,salario_novo;
    ano_atual = 2025;
    plano_saude = 75;
    printf("Insira a sua matricula: ");
    scanf("%d", &matricula);
    printf("Insira seu salário base: ");
    scanf("%f", &salario);
    printf("Insira seu ano de admissão: ");
    scanf("%d", &ano_admissao);
    printf("Insira o seu número de dependentes: ");
    scanf("%d", &num_dependentes);
    if (ano_admissao < 1980){
        printf("ano inserido inválido");
    }
    else if (ano_admissao > 2025){
        printf("ano inserido inválido");
    }
    else {
        tempo_servico = ano_atual - ano_admissao;
        salario_novo = salario;
        printf("Tempo de serviço: %d\n", tempo_servico);
        for (int i = 0; i < tempo_servico; i += 2){
            if (i%2 == 0){
                salario_novo += 100;
            }
        }
        for (int i = 0; i < num_dependentes; i++){
            salario_novo +=50;
            plano_saude += 75;
        }
        inss = salario * 0.25;
        printf("inss: %.2f", inss);
        imposto_renda = (salario - inss) * 0.5;
        printf("Imposto de renda: %.2f", imposto_renda);
        salario_novo = salario_novo - (inss +  imposto_renda + plano_saude);
        printf("Novo salário bruto: %.2f\n", salario);
        printf("Novo salário liquido: %.2f\n", salario_novo);
    }


    
    return 0;
}