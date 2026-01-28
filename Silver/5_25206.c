#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#pragma warning(disable: 4996)

float solve();
float grade_calc(char grade[]);


int main(){
    printf("%f",solve()); 
}

float solve(){
    char subject_name[55];
    float subject_score;
    char subject_grade[5];

    float res, total_grade = 0, total_credits = 0;
    
    for(int i = 0; i < 20; i++){
        scanf("%s %f %s", subject_name, &subject_score, subject_grade);
        int check = grade_calc(subject_grade);
        if(check != -1){
            total_grade = total_grade + (grade_calc(subject_grade) * subject_score);
            total_credits = total_credits + subject_score;
        }
    }

    res = total_grade / total_credits;
    return res;
}

float grade_calc(char grade[]){
    if(strcmp(grade, "A+") == 0) return 4.5;
    else if(strcmp(grade, "A0") == 0) return 4.0;
    else if(strcmp(grade, "B+") == 0) return 3.5;
    else if(strcmp(grade, "B0") == 0) return 3.0;
    else if(strcmp(grade, "C+") == 0) return 2.5;
    else if(strcmp(grade, "C0") == 0) return 2.0;
    else if(strcmp(grade, "D+") == 0) return 1.5;
    else if(strcmp(grade, "D0") == 0) return 1.0;
    else if(strcmp(grade, "F") == 0) return 0.0;
    else if(strcmp(grade, "P") == 0) return -1.0;
}
