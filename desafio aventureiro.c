#include <stdio.h>

int main (){
    //carta1


    char EstadoA = 'A';                                                                                                                                                                                                                                          
    char Codigo[4] ="11";
    char Cidade [20] = "Sao Paulo";
    int Populacao = 11.451999;
    float Area = 1521.11;
    float PIB = 828.98;
    int  PontosTuristicos = 50;
    float DensidadePopulacional = 8100.00;
    float PIBPerCapita = 56724.32;

    printf("Estado:%d\n", EstadoA);
    printf("Codigo:%s\n", Codigo); 
    printf("Cidade:%s\n", Cidade);
    printf("Populacao:%d\n", Populacao);
    printf("Area:%.2f\n", Area);    
    printf("PIB:%.2f\n", PIB);
    printf("Pontos Turisticos:%d\n", PontosTuristicos);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacional);
    printf("PIB Per Capita:%.2f\n", PIBPerCapita);
    printf("populacao / Area:%.2f\n",Populacao / Area);
    printf("Populacao / PIB:%.2f\n", Populacao / PIB);

    //carta2
    
    char EstadoB = 'B';
    char CodigoB[4] = "21";
    char CidadeB[20] = "Rio de Janeiro";
    int PopulacaoB = 6748000;
    float AreaB = 1200.25;
    float PIBB = 300.50;
    int PontosTuristicosB = 30;
    float DensidadePopulacionalB = 5622.24;
    float PIBPerCapitaB = 44532.91;

    printf("Estado:%d\n", EstadoB);
    printf("Codigo:%s\n", CodigoB);
    printf("Cidade:%s\n", CidadeB);
    printf("Populacao:%d\n", PopulacaoB);
    printf("Area:%.2f\n", AreaB);
    printf("PIB:%.2f\n", PIBB);
    printf("Pontos Turisticos:%d\n", PontosTuristicosB);
    printf("Densidade Populacional:%.2f\n", DensidadePopulacionalB);
    printf("PIB Per Capita:%.2f\n", PIBPerCapitaB);
    printf("Populacao / Area:%.2f\n",PopulacaoB / Area);
    printf("Populacao / PIB:%.2f\n", PopulacaoB / PIBB);


    
    printf("Populacao do Estado eh > do que PopulacaoB? %u\n", Populacao > PopulacaoB);
    printf("Area do Estado eh > do que AreaB? %.2f\n", Area > AreaB);
    printf("PIB do Estado eh > do que PIBB? %.2f\n", PIB > PIBB);
    printf("Pontos Turisticos do Estado eh > do que Pontos TuristicosB? %d\n", PontosTuristicos > PontosTuristicosB);
    printf("Densidade Populacional do Estado eh > do que Densidade PopulacionalB? %.2f\n", DensidadePopulacional > DensidadePopulacionalB);
    printf("PIB Per Capita do Estado eh > do que PIB Per CapitaB? %.2f\n", PIBPerCapita > PIBPerCapitaB);         







  
 
   

      




    














}