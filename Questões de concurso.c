//Programa desenvolvido por Antônio Lucas Costa Araújo. 
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
      setlocale(LC_ALL, "Portuguese");
      
      int pergunta1;
      int pergunta2;
      int pergunta3;
      int pergunta4;
      int pergunta5;
      
    printf("Este código simula uma simples prova de concurso com 5 perguntas boa sorte.");

    printf(" (2015) A Comissão de Valores Mobiliários (CVM) é um órgão que regula e fiscaliza o mercado de capitais no Brasil, sendo:\n\n 1) Subordinada ao Banco Central do Brasil.\n 2) subordinada ao Banco do Brasil.\n 3) Subordinada à Bolsa de Valores de São Paulo (BOVESPA).\n 4) Independente do poder público.\n 5) Vinculada ao poder executivo (Ministério da Fazenda)\n\n");
    scanf("%d", &pergunta1);
    
    printf("9. (2007) Em 2006, o IBGE completou 70 anos de sua fundação. Esse instituto foi criado no contexto histórico da(o):\n\n 1) Ditadura Militar, de Costa e Silva.\n 2) Transição Democrática, de José Sarney. \n 3) Estado Novo, de Getúlio Vargas.\n 4) Plano de Metas, de Juscelino Kubitschek.\n 5) Milagre Brasileiro, de Ernesto Geisel.\n\n");
    scanf("%d", &pergunta2);
    
    printf("(2011) Uma nova medição realizada em 2004 pelo Instituto Brasileiro de Geografia e Estatística IBGE foi responsável pela mudança do ponto considerado o mais alto do país que de pouco mais de 3 mil metros de altitude passou a ter pouco mais de 2900 metros\n\n Localizado na região Norte brasileira, recebe a denominação de: \n1) Pico da Neblina. \n2) Pico Cristal. \n3) Pico da Bandeira. \n4) Pico 31 de Março. \n5) Pico das Agulhas Negras.\n\n");
    scanf("%d", &pergunta3);
    
    printf(" (2007) O Brasil é uma república federativa formada pela União, pelos estados e pelos municípios. A Câmara dos Deputados e as Câmaras de Vereadores correspondem, respectivamente, aos níveis federativos:\n\n 1) municipal e federal\n 2) estadual e federal.\n 3) estadual e distrital. \n4) federal e estadual. \n5) federal e municipal.\n\n");
    scanf("%d", &pergunta4);
    
    printf("(2013) Espaço livre destinado pela municipalidade à circulação, parada ou estacionamento de veículos, ou à circulação de pedestres, é:\n\n 1) passagem.\n 2) rua.\n 3) caminho.\n 4) avenida.\n 5) logradouro público.\n\n");
    
    scanf("%d", &pergunta5);
    
    if(pergunta1 == 5){
        printf("Você acertou a primeira pergunta.\n");
    }else{
        printf("Você errou a primeira pergunta.\n");
    }
    
    if(pergunta2 == 3){
        printf("Você acertou a segunda pergunta.\n");
    }else{
        printf("Você errou a segunda pergunta.\n");
    }
    
    if(pergunta3 == 1){
        printf("Você acertou a terceira pergunta.\n");
    }else{
        printf("Você errou a terceira pergunta.\n");
    }
    
    if(pergunta4 == 5){
        printf("Você acertou a quarta pergunta.\n");
    }else{
        printf("Você errou a quarta pergunta.\n");
    }
    
    if(pergunta5 == 5){
        printf("Você acertou a quinta pergunta.\n");
    }else{
        printf("Você errou a quinta pergunta.\n");
    }
    
    return 0;
}
