// 6210451187 Techin kajkratoke//
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int x;
    struct Node *k;
};

void work(struct Node **d, struct Node *e,struct Node *p) {
    struct Node *g;
    if (*d == NULL || (*d)->x >= e->x) {
        e->k = *d;
        *d = e;
    } else {
         p = *d;
        while (p->k != NULL && p->k->x < e->x) {
            p = p->k;
        }
        e->k = p->k;
        p->k = e;
    }
}

int main() {
    struct Node *s = NULL;
    struct Node *w = NULL;
    int u;

    while (1) {
        scanf("%d", &u);
        if (u==-1){
          break;
        }
        else{
          struct Node *w = (struct Node *)malloc(sizeof(struct Node));

          w->x = u;
          w->k = NULL;

          work(&s, w);
        }
    }
    for(;s; s = s->k){
        printf("%d\n", s->x);
    }
}