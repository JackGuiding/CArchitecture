#ifndef DO_ROLE_H__
#define DO_ROLE_H__

#include "Context.h"
#include "Factory.h"

void Do_Role_Spawn(Context *ctx, int id, Vector2 pos, Vector2 size, Color color,
                   float speed);
void Do_Role_Move(Context *ctx, E_Role *role, Vector2 dir, float deltaTime);

#endif