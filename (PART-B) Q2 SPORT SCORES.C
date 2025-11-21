#include<stdio.h>
int main(){
        int scores[50],n,i,j,temp;
        printf("How many scores?");
        scanf("%d",&n);
        printf("Enter the scores:\n");
        for(i = 0;i<n;i++){
            scanf("%d",&scores[i]);
        }
        for (i = 0;i<n;i++){
            for (j = i + 1;j<n;j++){
                if(scores[j] > scores[i])
                temp = scores[i];
                scores[i] = scores[j];
                scores[j] = temp;
            }
        }
            printf("\nscores in decending order:\n");
            for(i = 0;i<n;i++){
                printf("%d\n",scores[i]);
            }
            }
