#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n = 0;
    int min=21;
    int max=0;
    float sum=0;
    printf("Veuillez saisir le nombre d'élèves \n");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        int note = -1;
        while((note<0) || (note >20)){
            printf("Veuillez saisir la note de l'élève numéro %d \n", (i+1));
            scanf("%d", &note);
            if((note>0) && (note<20)){
                if(note>=10){
                    printf("L'élève numéro %d est admis \n", (i+1));
                }else{
                    printf("L'élève numéro %d n'est pas admis \n", (i+1));
                }
            }
        }
        sum += note;
        if(note<min){
            min=note;
        }
        if(note>max){
            max=note;
        }
    }
    sum = sum / n;
    printf("la moyenne de la classe est %f /20. La note la plus basse est %d. La note la plus haute est %d.", sum, min, max);
}
