#include <stdio.h>
#include <stdlib.h>
#include <math.h>//Utilizada apenas para ter acesso ao PI

void p1() {
  float raio;
  printf("Digite o valor do raio em cm \n");

  scanf("%f",&raio);
  float raio_cubo = raio * raio * raio;

  float volume = (raio_cubo * 4 * M_PI)/3;

  printf("%f cm",volume);
}

void p2() {
  float segundos;

  printf("Digite o tempo em segundos \n");
  scanf("%f",&segundos);

  int segundos_int = segundos;
  int minutos = segundos_int / 60;

  int resto_segundos = segundos_int % 60;
  segundos = (segundos - segundos_int) + resto_segundos;

  int horas = minutos / 60;
  minutos = minutos % 60;

  printf("%02d:%02d:%05.2f",horas,minutos,segundos);
}

void p3() {
  int reais;

  printf("Digite o valor em reais \n");
  scanf("%d",&reais);

  int cem_reais = reais / 100;
  reais = reais % 100;

  int cinquenta_reais = reais / 50;
  reais = reais % 50;

  int vinte_reais = reais / 20;
  reais = reais % 20;

  int dez_reais = reais / 10;
  reais = reais % 10;

  int cinco_reais = reais / 5;
  reais = reais % 5;

  int dois_reais = reais / 2;
  reais = reais % 2;

  printf("100 reais: %d \n 50 reais: %d \n 20 reais: %d \n 10 reais: %d \n 5 reais: %d \n 2 reais: %d \n 1 real: %d \n",cem_reais,cinquenta_reais,vinte_reais,dez_reais,cinco_reais,dois_reais,reais);
}

int main()
{
    printf("EXERCISIOS BASICOS EM C \nProgramas disponiveis: \n\n 1-Calculo de volume de esfera \n 2-Conversor segundos em horas:minutos:segundos \n 3-Algoritmo que demonstra o valor em menor numero de cedulas \n\n");
    int n;
    while((n>3)||(n<=0)){
        printf("Digite o numero do programa a executar: ");
        scanf("%d", &n);
    }

    switch(n) {
        case 1: p1(); break;
        case 2: p2(); break;
        case 3: p3(); break;
    default : break;
  }
  return 0;
}
