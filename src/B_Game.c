#include "B_Game.h"
#include "Do_Role.h"
#include "M_Input.h"

void B_Game_Enter(Context *ctx) {

    // 生成主角
    Do_Role_Spawn(ctx, 1, (Vector2){100, 100}, (Vector2){20, 20}, RED, 50);
}

// 一帧逻辑(1/60s = 0.0167s)
void B_Game_Tick(Context *ctx, float deltaTime) {

    // ==== 1. 输入 ====
    // 输入模块: Process Input
    // - 来源: 硬件(键盘, 鼠标, 手柄), 网络, AI, 文件......
    M_Input_Tick(ctx->input, deltaTime);

    // ==== 2. 行为逻辑 ====
    // deltaTime 每帧不一样的
    ctx->fixTimer += deltaTime;
    if (ctx->fixTimer < ctx->fixInterval) {
        B_Game_FixTick(ctx, ctx->fixTimer);
        ctx->fixTimer = 0;
    } else {
        while (ctx->fixTimer >= ctx->fixInterval) {
            B_Game_FixTick(ctx, ctx->fixInterval);
            ctx->fixTimer -= ctx->fixInterval;
        }
    }

    // LateTick: 刷新显示位置, 相机跟随, 音效/BGM, 灯光
    
}

void B_Game_FixTick(Context *ctx, float fixdt) {
    for (int i = 0; i < ctx->repo_role->count; i += 1) {
        E_Role *role = ctx->repo_role->all[i];
        Vector2 moveAxis = ctx->input->moveAxis;
        Do_Role_Move(ctx, role, moveAxis, fixdt);
    }
}

void B_Game_Draw(Context *ctx) {
    // ==== 3. 绘制 ====
    // 画所有角色
    for (int i = 0; i < ctx->repo_role->count; i += 1) {
        E_Role *role = ctx->repo_role->all[i];
        DrawRectangleV(role->pos, role->size, role->color);
    }
}

void B_Game_Exit(Context *ctx) { printf("B_Game_Exit\n"); }