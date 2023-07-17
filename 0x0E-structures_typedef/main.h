#include <stdio.h>

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strcpy(char *dest char *src);
int _strlen(char*s);

#endif
