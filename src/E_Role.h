#ifndef E_ROLE_H__
#define E_ROLE_H__

#include "../include/raylib.h"

// 实体
// E - Entity
typedef struct E_Role {
    int id;
    Vector2 pos;
    Vector2 size;
    Color color;
    float speed;
} E_Role;

#endif