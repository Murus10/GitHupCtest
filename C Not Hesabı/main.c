#include <stdio.h>
#include <stdlib.h>


int main() {
	float vize,final,sonuc;
	printf("Vize gir : ",vize); scanf("%f",&vize);
	printf("Finali gir ; ",final); scanf("%f",&final);
	if(final<50) printf("Kaldin!!!");

	sonuc=vize*(0.40) + final*(0.60) ;
	if(sonuc>=0 && sonuc <30){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : FF " );
	}
		if(sonuc>=30 && sonuc <40){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : FD " );
	}
		if(sonuc>=40 && sonuc <45){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : DD " );
	}
		if(sonuc>=45 && sonuc <50){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : DC " );
	}
		if(sonuc>=50 && sonuc <57){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : CC " );
	}	if(sonuc>=57 && sonuc <65){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : CB " );
	}
		if(sonuc>=65 && sonuc <75){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : BB " );
	}
		if(sonuc>=75 && sonuc <85){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : BA " );
	}
		if(sonuc>=85 && sonuc <100){
			printf(" ORT : %f/n",sonuc);
			printf(" Harf : AA " );
	}

	
	return 0;
}
