#include <stdio.h>

int main(){
	
	float consumo_moradores, consumo_final, capacidade, volume, alt, larg, comp, autonomia;
	
	scanf("%f %f %f", &alt, &larg, &comp); //volume
	scanf("%f", &consumo_moradores); //litros/dia
	
	volume = alt*larg*comp; //cm^3
	
	capacidade = volume / 1000;

	autonomia = capacidade / consumo_moradores;
	
	if(autonomia < 2.0){
		printf("Capacidade do Reservatorio= %.1f litros\nAutonomia do reservatorio= %.1f dias\nConsumo Elevado", capacidade, autonomia);
	} else if(autonomia >= 2.0 && autonomia < 7.0){
		printf("Capacidade do Reservatorio= %.1f litros\nAutonomia do reservatorio= %.1f dias\nConsumo Moderado", capacidade, autonomia);
	}else
		printf("Capacidade do Reservatorio= %.1f litros\nAutonomia do reservatorio= %.1f dias\nConsumo Reduzido", capacidade, autonomia);
	
	return 0;
}
