#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL,"");
    char*q,*s;
    char n[20], cpf[11], tl[9], e[50], en[100], rg[40];
    int i, te, p, op, op2, op3, op4, op5, op6, op7, op8, op9, op10, op11;
    
    //Checkin
    printf("Bem vindo ao Hotel Pavan! Para reservar um quarto preencha o formulário:\n");
    do{
    printf("Informe o número de pessoas e o tempo de estadia:(em dias)\n");
    scanf("%d, %d",&p,&te);
    if(p<1) {
        printf("Insira um número de pessoas válido.\n");
    }
    }while(p<1);
    printf("Informe seu nome completo e sua idade:\n");
    scanf("%s,%d", n, &i);
    printf("Informe seu endereço:\n");
    scanf("%s", en);
    printf("Informe seu RG:\n");
    scanf("%s", rg);
    printf("Informe seu CPF:\n");
    scanf("%s", cpf);
    printf("Informe seu telefone:\n");
    scanf("%s", tl);
    do{
    printf("Informe seu email se quiser receber novidades do hotel:(opcional)\n1.Concordar\n2.Seguir\nR:");
    scanf("%d", &op);
    if(op==1) {
        printf("Informe seu email:\n");
        scanf("%s", e);
    }
    else if(op<1 || op>2) {
        printf("Insira um número válido.");
    }
    }while(op<1 || op>2);
    for(;;) {
    system("cls");
    printf("Seu checkin está completo, segue as informações:\nNome:%s\nIdade:%d\nEndereço:%s\nRG:%s\nCPF:%s\nTelefone:%s\nTempo de estadia(em dias):%d\nNúmero de pessoas:%d\n", n, i, en, rg, cpf, tl, te, p);
    printf("Ouve algum erro de informação? Reenvie o formulário:\n1.Reenviar\n2.Seguir\nR:");
    scanf("%d",&op2);
    if(op2==1) {
    printf("Bem vindo ao Hotel Pavan! Para reservar um quarto preencha o formulário:\n");
    printf("Informe o número de pessoas e o tempo de estadia:(em dias)\n");
    scanf("%d, %d",&p,&te);
    printf("Informe seu nome completo e sua idade:\n");
    scanf("%s,%d", n, &i);
    printf("Informe seu endereço:\n");
    scanf("%s", en);
    printf("Informe seu RG:\n");
    scanf("%s", rg);
    printf("Informe seu CPF:\n");
    scanf("%s", cpf);
    printf("Informe seu telefone:\n");
    scanf("%s", tl);
    do{
    printf("Informe seu email se quiser receber novidades do hotel:(opcional)\n1.Concordar\n2.Seguir\nR: ");
    scanf("%d", &op);
    if(op==1) {
        printf("Informe seu email:\n");
        scanf("%s", e);
    }
    else if(op<1 || op>2) {
        printf("Insira um número válido.\n");
    }
    }while(op<1 || op>2);
    printf("Seu checkin está completo!");
    }
    if(op2==2) {
        printf("Seu checkin foi confirmado.\n");
        break;
    }
    }
    if (op<1 || op>2) {
        printf("Insira um número válido\n");
    }
    
    //Quartos
    if(p==2) {
        do{
        system("cls");
        printf("Selecione seu quarto de casal:\n1.Quarto Casal 1\n2.Quarto Casal 2\nR: ");
        scanf("%d",&op4);
        switch(op4) {
            case 1:
            q = "Quarto Casal 1";
            break;
            
            case 2:
            q = "Quarto Casal 2";
            break;
        }
                if(op4<1 || op4>2) {
            printf("Insira uma opção válida.\n");
                }
        }while(op4<1 || op4>2);
    }
    
    if(p>=3 && p<=6) {
        do{
        system("cls");
        printf("Selecione os quartos padrões:\n1.Quarto 1\n2.Quarto 2\nR: ");
        scanf("%d",&op4);
        switch(op4) {
            case 1:
            q = "Quarto 1";
            break;
            
            case 2:
            q = "Quarto 2";
            break;
        }
                if(op4<1 || op4>2) {
            printf("Insira uma opção válida.\n");
                }
        }while(op4<1 || op4>2);
    }

    if (p>6) {
    do{
    	system("cls");
        printf("Selecione seu quarto de família:\n1.Quarto Família 1\n2.Quarto Família 2\n3.Quarto Família 3\nR: ");
        scanf("%d",&op4);
        switch(op4) {
            case 1:
            q = "Quarto Família 1";
            break;
            
            case 2:
            q = "Quarto Família 2";
            break;
            
            case 3:
            q = "Quarto Família 3";
            break;
        }
                if(op4<1 || op4>3) {
            printf("Insira uma opção válida.\n");
                }
        }while(op4<1 || op4>3);
    }

    if (p==1) {
        do{
        system("cls");
        printf("Selecione os quartos solos:\n1.Quarto Solo 1\n2.Quarto Solo 2\n3.Quarto Solo 3\nR: ");
        scanf("%d",&op4);
        switch(op4) {
            case 1:
            q = "Quarto Solo 1";
            break;
            
            case 2:
            q = "Quarto Solo 2";
            break;
            
            case 3:
            q = "Quarto Solo 3";
            break;
        }
                if(op4<1 || op4>3) {
            printf("Insira uma opção válida.\n");
                }
        }while(op4<1 || op4>3);
    }
    
    printf("Seu Quarto é o %s\n", q);
    
    //Menu
    do{
	
    do{
    system("cls");
    printf("Selecione uma das funções abaixo:\n1.Solicitar serviço de quarto\n2.Fazer pedido\n3.Sair\nR: ");
    scanf("%d",&op3);
    if(op3<1 || op3>3); {
    printf("Insira uma opção válida\n");
    }
    }while(op3<1 || op3>3);
    //Serviço de Quarto
    if(op3==1) {
        do{
        system("cls");
        printf("Selecione os serviços:\n1.Manutenção\n2.Limpeza\n3.Camareira\nR: ");
        scanf("%d", &op5);
    switch(op5) {
        case 1:
        s = "Manutenção";
        break;
        
        case 2:
        s = "Limpeza";
        break;
        
        case 3:
        s = "Camareira";
        break;
    }
        }while(op5<1 || op5>3);
        printf("Seu serviço: %s foi solicitado no %s(seu quarto)", s, q);
    }
    else if(op3==2) {
    	system("cls");
        printf("Cardápio:\n1.Café da Manhã\n2.Almoço\n3.Jantar\n4.Bebidas\n5.Sobremesas\nR: ");
        scanf("%d", &op5);
        switch(op5) {
            case 1:
            printf("Cardápio Café da Manhã:\n1.Pão com Manteiga/\n2.Misto Quente\nR: ");
            scanf("%d",&op7);
                printf("Seu café da manhã será servido.");
                break;
                
                case 2:
                printf("Cardápio Almoço:\n1.Lasanha\n2.Strogonoff\nR: ");
                scanf("%d",&op8);
                printf("Seu almoço será servido");
                break;
                
                case 3:
                printf("Cardápio Jantar:\n1.Macarrão\n2.Arroz Feijão e Carne\n");
                scanf("%d",&op9);
                printf("Seu jantar será servido.");
                break;
                
                case 4:
                printf("Cardápio Bebidas:\n1.Suco\n2.Refrigerante\n3.Água\nR:" );
                scanf("%d",&op10);
                printf("Sua bebida será servida.");
                break;
                
                case 5:
                printf("Calendário Sobremesas:\n1.Sorvete\n2.Gelatina\n3.Bolo\nR: ");
                scanf("%d",&op11);
                printf("Sua sobremesa será servida.");
                break;
        }
    }
}while(op3!=3);
    if(op3==3); {
        return 1;
    }
    if(op3<1 || op3>3) {
       printf("Insira uma opção válida\n");
       }
       return 0;
}
