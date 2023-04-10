#include <stdio.h>

int main(){
	// kamus lokal
	int i,j,k,max,max2;
	int Elmt[20];
	// Algoritma
	
	scanf("%d",&i);
	
	for(j=1;j<=i;j++){
		scanf("\n %d", &k);
		if (j == 1){
			Elmt[j] = k;
			max = k;
			max2 = k;
		}
		else{
			if(max < k){
				Elmt[j] = k;
				max2 = max;
				max = k;
			}
			else{
				if (max == k){
					Elmt[j];
				}
				else{
					if(max == max2){
						Elmt[j];
						max2 = k;
					}
					else{
						Elmt[j];
					}
				}
			}
		}
	}
	printf("%d",max2);
	return 0;
}