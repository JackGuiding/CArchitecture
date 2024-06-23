#include "B_Game.h"
#include "Do_Role.h"

void B_Game_Enter(Context *ctx) {

    // 生成主角
    Do_Role_Spawn(ctx, 1, (Vector2){100, 100}, (Vector2){20, 20}, RED, 5);

}

void B_Game_Tick(Context *ctx, float deltaTime) {
    printf("B_Game_Tick\n");
}

void B_Game_Draw(Context *ctx) {
    // 画所有角色
    for (int i = 0; i < ctx->repo_role->count; i += 1) {
        E_Role *role = ctx->repo_role->all[i];
        DrawRectangleV(role->pos, role->size, role->color);
    }
}

void B_Game_Exit(Context *ctx) {
    printf("B_Game_Exit\n");
}