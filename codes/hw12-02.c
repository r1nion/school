#include<stdio.h>
#include<stdlib.h>

int main(){
    int i;
    double x1,x2,y1,y2,katamuki,seppen;

    FILE *fp_in,*fp_out;
    fp_in=fopen("input.txt","r");
    fp_out=fopen("result.txt","w");

    if(fp_in==NULL||fp_out==NULL){
        printf("Can't open file");
        exit(1);
    }

    for(i=0;i<4;i++){
        fscanf(fp_in,"%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
    
        katamuki=(y2-y1)/(x2-x1);
        seppen=y1-katamuki*x1;
    
        fprintf(fp_out,"y=%.2lfx+%.2lf\n",katamuki,seppen);
    
    }
    
    fclose(fp_in);
    fclose(fp_out);

    return 0;
}