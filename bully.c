#include<stdio.h>
#include<stdlib.h>
#define MAX 20

int main() {
    int n = 0, nodes[MAX], reply[MAX];
    printf("\nEnter the number of nodes: ");
    scanf("%d", &n);
    if(n > MAX) {
        exit(1);
    }
    printf("\nEnter ids of n processes");
    for (int i = 0; i < n; i++) {
        int a;
        printf("\nid:");    
        scanf("%d", &a);
        nodes[a] = 1;
    }

    int coord;
    for (int i = MAX - 1; i >= 0; i--) {
        if(nodes[i] == 1){
            coord = i;
            break;
        }
    }
    printf("Coordinator is %d", coord);

    int kill;
    printf("\nEnter id of node to kill: ");
    scanf("%d", &kill);
    nodes[kill] = -1;

    int be, current_winner = -1; 
    printf("\nEnter id of node which will start BE: ");
    scanf("%d", &be);

    for (int i = be; i < MAX; i++) {
        if(nodes[i] == 1) {
            for(int j = 0; j < MAX; j++) {
                reply[j] = 0;
            }
            printf("\n\n%d starts the election",i);
            for(int j = i + 1; j < MAX; j++) {
                if(nodes[j] == 1) {
                    reply[j] = 1;
                    printf("\nRequest sent from %d to %d", i, j);
                    current_winner = j;
                } else if (nodes[j] == -1) {
                    reply[j] = -1;
                    printf("\nRequest sent from %d to %d", i, j);
                }
            }
            for(int j = 0; j < MAX; j++) {
                if(reply[j]==1) {
                    printf("\n%d replied OK",j);
                }
                else if(reply[j]==-1) {
                    printf("\n%d is dead", j);
                }
            }
        }
    }

    printf("\n\nWinner is %d", current_winner);

    for(int i = 0; i < MAX; i++) {
        if(nodes[i] == 1 && i != current_winner) {
                printf("\n%d sends broadcast msgs to %d", current_winner, i);
        }

    }
}