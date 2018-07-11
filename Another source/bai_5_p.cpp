#include<stdio.h>

// khong su dung Mang.

int main(){
	int car, time=0, tpc, rate1=0, rate2=0, flatrate=0, i=0;  //tpc= time per car.
	double money=0, tmp;
	do{
		i += 1;
		printf("Time of Car[%d]: ", i);
		scanf("%d", &tpc);
		if (tpc<=0) 
			break;
		time += tpc;
		
		// process Time + Money per Car
		if ((tpc > 0) && (tpc<=4)) {
			money += 3*tpc;
			printf("Cost of Car[%d]: $%d \n", i, 3*tpc);
			rate1 += 1;
		} else {
			if ((tpc >= 5) && (tpc <= 7)){
				tmp= (tpc-4)*1.5 + 12;
				money += tmp;
				printf("Cost of Car[%d]: $%.1lf \n", i, tmp);
				rate2 += 1;
			} else {
				printf("Cost of Car[%d]: $18 \n", i);
				money += 18;
				flatrate += 1;
			}
		}
	} while (tpc>0);
	
	if (time == 0){
		printf("This is a bad day, no car uses the car park.");
	} else {
		printf("1. TOTAL NUMBER OF CARS FOR EACH TIME PERIOD:\n");
		printf("		- Number of Cars in RATE1:     %d\n", rate1);
		printf("		- Number of Cars in RATE2:     %d\n", rate2);
		printf("		- Number of Cars in FLATRATE:  %d\n\n", flatrate);
		printf("2. The total number of hours for all cars processed: %d hour(s)\n\n", time);
		printf("3. The total of all car-parking fees collected: $%.1lf \n\n", money);
		tmp = (double)time/(i-1);
		printf("4. The average number of hours a car stayed in the car park: %.2lf hour(s) \n\n", tmp);
		tmp = money/time;
		printf("5. The average cost of a stay in the car park: $%.2lf \n\n", tmp);
	}
	return(0);
}



