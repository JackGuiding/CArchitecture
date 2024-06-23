#include "Do_Role.h"
#include "import.h"

// 生成
void Do_Role_Spawn(Context *ctx, int id, Vector2 pos, Vector2 size, Color color,
                   float speed) {

    // 工厂
    E_Role *role = Factory_Role(id, pos, size, color, speed);

    // 仓库
    Repo_Role_Add(ctx->repo_role, role);
}

// 移动
void Do_Role_Move(Context *ctx, E_Role *role, Vector2 dir, float deltaTime) {
    dir = Vector2Normalize(dir);
    role->pos = Vector2Add(role->pos, Vector2Scale(dir, role->speed * deltaTime));
}