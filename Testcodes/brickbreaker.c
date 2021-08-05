
#include <stdlib.h>
#include <math.h>
//#include <SDL/SDL.h>

#define WIDTH 640
#define HEIGHT 420
#define BLK_W WIDTH
#define BLK_H HEIGHT / 3

struct l_node
{
    struct particle *data;
    struct l_node *next;
};

struct particle
{
    int x, y, dx, dy, pix;
};

struct paddle
{
    int x, w, h;
};

struct l_node *
cons(struct particle *x, struct l_node *tail)
{
    struct l_node *head = malloc(sizeof(struct l_node));
    head->data = x;
    head->next = tail;
    return head;
}

void
update_particle(struct particle *pt)
{
    if ((pt->x > WIDTH && pt->dx > 0) || (pt->x < 0 && pt->dx < 0)) {
        pt->x -= pt->dx;
    } else {
        pt->x += pt->dx;
    }

    if (pt->y < 0 && pt->dy < 0) {
        pt->y -= pt->dy;
    } else {
        pt->y += pt->dy;
    }
}

int
collision_paddle(struct paddle *pd, struct particle *pt)

{
    return pt->y >= (HEIGHT - pd->h)
        && pt->x >= pd->x
        && pt->x <= (pd->x + pd->w)
        && pt->dy > 0;
}

int
approach(struct particle *pt, struct particle *coll, int **block)
{
    int dx, dy, pix;
    for (dx = 0; dx <= pt->dx; dx++) {
        for (dy = 0; dy <= pt->dy; dy++) {
            pix = block[pt->x+dx][pt->y+dy];
            if (pix != -1) {
                coll->x   = pt->x + dx;
                coll->y   = pt->y + dy;
                coll->dx  = rand() % 10;
                coll->dy  = rand() % 9 + 1;
                coll->pix = pix;
                return 1;
            }
        }
    }
    return 0;
}

#define MIN(a, b) (a) <= (b) ? (a) : (b)

int
main(int argc, char **argv)
{
    int w, h;
    int x, y;
    int block[WIDTH][HEIGHT];
    int block_size = WIDTH * HEIGHT;

    struct l_node *curr = NULL;
    struct l_node *pts  = NULL;
    struct paddle *pd   = NULL;

    // init block with SDL_Pixel values
    for (w = 0; w <= BLK_W; w++) {
        for (h = 0; h <= BLK_H; h++) {
            block[w][h] = (w + h) * 2800;
        }
    }

    // main loop
    while (pts != NULL && block_size != 0) {
        // iterate over list of active particles
        //for (pt = pts; pt != NULL; pt = pt->next) {
        for (curr = pts; curr != NULL;) {
            struct particle *pt = curr->data;

            if (collision_paddle(pd, pt)) {
                pt->y = MIN(pt->y, HEIGHT);
                pt->dy *= -1;
            } else {
                struct particle *coll;
                if (approach(pt, coll, block)) {
                    // pt->dy = abs(pt->dy);
                    cons(coll, pts);
                    block_size--;
                    block[coll->x][coll->y] = -1;
                }
            }

            update_particle(pt);
            // filter OOB particles
            if (curr->next->data->y >= HEIGHT) {
                struct l_node *ptr = curr->next->next;
                free(curr->next);
                curr->next = ptr;
            }
            curr = curr->next;
        }
    }

    return 0;
}
