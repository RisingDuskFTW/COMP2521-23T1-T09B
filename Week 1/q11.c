// Representation 1
struct node {
    int value;
    struct node *next;
};

typedef struct node *List;

// Function prototype to insert a number into a list at a given position
struct node *insert(struct node *list, int num, int pos);
// replace `struct node *` with `List `



// Representation 2
struct node {
    int value;
    struct node *next;
};

struct list {
    struct node *head;
};

typedef struct list *List;

// Function prototype to insert a number into a list at a given position
void insert(struct list *list, int num, int pos);
