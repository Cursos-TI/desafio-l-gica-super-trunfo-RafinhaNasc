#include <stdio.h>

int main(){
// Trabalho de op lógicos, desafio nivel novato/aventureiro
// Declaração e inicialização das variáveis da carta 1
  char Estado[20] = "A";
  char CodigoCarta[20] = "A01";
  char NomeCidade[20] = "Goiania";
  unsigned long int Populacao = 1456741;
  float Area = 729.29;
  float PIB = 59000000;
  int NumerosPontosTuristicos = 60;
  float DensidadePopulacional = Populacao/Area; 
  float PIBperCapita = (float) PIB/Populacao;
  float SuperPoder = Populacao + Area + PIB + PIBperCapita + (1/DensidadePopulacional) 
  + NumerosPontosTuristicos;

// Declaração e inicialização das variáveis da carta 2
  char estado[30] = "B";
  char codigocarta[30] = "B02";
  char nomecidade[30] = "Presidente Prudente";
  unsigned long int populacao = 234706;
  float area = 560.63; 
  float pib = 14000000; 
  int numerospontosturisticos = 20;
  float densidadepopulacional = populacao/area; 
  float pibpercapita = (float) pib/populacao; 
  float superpoder = populacao + area + pib + pibpercapita + (1/densidadepopulacional)
  + numerospontosturisticos;

  
// Exibição dos dados das cartas, saída de dados

printf("Desafio Super Trunfo - Cidades\n");
printf("Tema 1 - Cadrasto das Cartas\n");
printf("\n");

printf("Carta 1\n");
printf("Estado: %s\n", Estado);
printf("Código da Carta: %s\n", CodigoCarta);
printf("Nome da Cidade: %s\n", NomeCidade);
printf("População (milhões): %.lu\n", Populacao);
printf("Área (km²): %.2f\n", Area);
printf("PIB (bilhões) %.2f\n", PIB);
printf("Numeros de Pontos Turísticos: %d\n", NumerosPontosTuristicos);
printf("Densidade Populacional: %.2f\n", DensidadePopulacional);
printf("Pib per Capita: R$ %.2f\n", PIBperCapita);
printf("Super Poder: %.2f\n", SuperPoder);
printf("\n");

printf("Carta 2\n");
printf("Estado: %s\n", estado);
printf("Código da Carta: %s\n", codigocarta);
printf("Nome da Cidade: %s\n", nomecidade);
printf("População (milhões): %.lu\n", populacao);
printf("Área (km²): %.2f\n", area);
printf("PIB (milhões): %.2f\n", pib);
printf("Numeros de Pontos Turísticos: %d\n", numerospontosturisticos);
printf("Densidade Populacional (hab/km²): %.2f\n", densidadepopulacional);
printf("Pib per Capita: R$ %.2f\n", pibpercapita);
printf("Super Poder: %.2f\n", superpoder);
printf("\n");

/* Comparação entre as cartas utilizando estruturas de condição composta if e else, 
verdadeiro ou falso, nota-se que na estrutura if eu coloquei saída de
dados para o resultado da carta 1 e no else coloquei saída de dados para o resultado da 
carta 2. */

printf("Comparação entre as cartas:\n");
printf("\n");
if( Populacao > populacao){
    printf("População: Carta 1 venceu\n");
} else {
    printf("População: Carta 2 (Pres.Prudente) venceu\n");
}
if(Area > area){
    printf("Area: Carta 1 (Goiania) venceu\n");
} else {
    printf("Area: Carta 2 (Pres.Prudente) venceu\n");
}
if(PIB > pib){
    printf("PIB: Carta 1 (Goiania) venceu\n");
} else {
    printf("PIB: Carta 2 (Pres.Prudente) venceu\n");
}
if(NumerosPontosTuristicos > numerospontosturisticos){
    printf("Numero de pontos turisticos: Carta 1 (Goiania) venceu\n");
} else {
    printf("Numero de pontos turisticos: Carta 2 (Pres.Prudente) venceu\n");
}
if(DensidadePopulacional < densidadepopulacional){
    printf("Densidade Populacional: Carta 1 (Goiania) venceu\n");
} else {
    printf("Densidade Populacional: Carta 2 (Pres.Prudente) venceu\n");
}
if(PIBperCapita > pibpercapita){
    printf("PIB Per Capita: Carta 1 (Goiania) venceu\n");
} else {
    printf("PIB Per Capita: Carta 2 (Pres.Prudente) venceu\n");
}
if(SuperPoder > superpoder){
    printf("Super Poder: Carta 1 (Goiania) venceu\n");
} else {
    printf("Super Poder: Carta 2 (Pres.Prudente) venceu\n");
}
printf("\n");
//Comparação entre as duas cartas no modo switch e if e else if;

int opcao;

printf("Escolha uma opção:\n");
printf("1. Nome das Cartas\n");
printf("2. Comparação dos atributos População\n");
printf("3. Comparação dos atributos Área\n");
printf("4. Comparação dos atributos PIB\n");
printf("5. Comparação dos atributos Números de Pontos Turísticos\n");
printf("6. Comparação dos atributos Densidade Populacional\n");
printf("7. Sair do jogo\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1: 
    printf("Nome da Carta 1: %s\n", NomeCidade);
    printf("Nome da Carta 2: %s\n", nomecidade);
break;
case 2:
    printf("População Carta 1: %lu\n", Populacao);
    printf("População Carta 2: %lu", populacao);
    printf("\n");
if (Populacao >= populacao){
    printf("Resultado: Carta 1 (Goiânia) venceu\n");
} else if (populacao >= Populacao){
    printf("Resultado: Carta 2 (Pres.Prudente) venceu\n");
} else {
    printf("Houve um empate\n");
}
break;
case 3:
    printf("Área Carta 1: %2.f\n", Area);
    printf("Área Carta 2: %2.f", area);
    printf("\n");
if (Area >= area){
    printf("Resultado: Carta 1 (Goiânia) venceu\n");
} else if (area >= Area){
    printf("Resultado: Carta 2 (Pres.Prudente) venceu\n");
} else {
    printf("Houve um empate\n");
}
break;
case 4:
    printf("PIB Carta 1: %2.f\n", PIBperCapita);
    printf("PIB Carta 2: %2.f", pibpercapita);
    printf("\n");
if (PIBperCapita >= pibpercapita){
    printf("Resultado: Carta 1 (Goiânia) venceu\n");
} else if (pibpercapita >= PIBperCapita){
    printf("Resultado: Carta 2 (Pres.Prudente) venceu\n");
} else {
    printf("Houve um empate\n");
}
break;
case 5:
    printf("Números de Pontos Turísticos Carta 1: %d\n", NumerosPontosTuristicos);
    printf("Números de Pontos Turísticos Carta 2: %d", numerospontosturisticos);
    printf("\n");
if (NumerosPontosTuristicos >= numerospontosturisticos){
    printf("Resultado: Carta 1 (Goiânia) venceu\n");
} else if (numerospontosturisticos >= NumerosPontosTuristicos){
    printf("Resultado: Carta 2 (Pres.Prudente) venceu\n");
} else {
    printf("Houve um empate\n");
}
break;
case 6:
    printf("Densidade Populacional Carta 1: %2.f\n", DensidadePopulacional);
    printf("Densidade Populacional Carta 2: %2.f", densidadepopulacional);
    printf("\n");
if (DensidadePopulacional <= densidadepopulacional){
    printf("Resultado: Carta 1 (Goiânia) venceu\n");
} else if (densidadepopulacional <= DensidadePopulacional){
    printf("Resultado: Carta 2 (Pres.Prudente) venceu\n");
} else {
    printf("Houve um empate\n");
}
break;
case 7:
    printf("Saindo do jogo...");
}

return 0;
}