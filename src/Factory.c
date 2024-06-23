#include "Factory.h"
#include <stdlib.h>

E_Role* Factory_Role(int id, Vector2 pos, Vector2 size, Color color, float speed) {
    E_Role* role = (E_Role*)malloc(sizeof(E_Role));
    role->id = id;
    role->pos = pos;
    role->size = size;
    role->color = color;
    role->speed = speed;
    return role;
}