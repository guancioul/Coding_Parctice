#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int count = 0, temp = 0;
char ***all_permutation;

void create_all_permutation(int n, char **s, int start){
    if(start == n){
        count++;
        all_permutation = realloc(all_permutation, count*sizeof(char**));
        memcpy(*(all_permutation+count-1), s, sizeof(int**));
    }else{
        for(int j = start; j<n; j++){
            char* temp = s[j];
            s[j] = s[start];
            s[start] = temp;
            create_all_permutation(n, s, start+1);
        }
    }
}

int next_permutation(int n, char** s){
    all_permutation = malloc(sizeof(char**));
    create_all_permutation(n, s, 0);
    if(temp<count){
        s = all_permutation[temp++];
        return 1;
    }
    return 0;
}

int main(){
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char*));
    for(int i=0; i<n; i++){
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }
    do{
        for(int i=0; i<n; i++)
            printf("%s%c", s[i], i == n-1 ? '\n' : ' ');
    } while(next_permutation(n, s));
    for(int i=0; i<n; i++)
        free(s[i]);
    free(s);
    return 0;
}
