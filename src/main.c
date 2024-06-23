#include "../include/raylib.h"
#include "B_Game.h"
#include "Context.h"
#include "E_Role.h"
#include "Factory.h"
#include <stdio.h>
#include <stdlib.h>

// 全局上下文
Context *ctx;

int main() {

    // 开始游戏
    // 1. 生成主角
    // 2. 生成敌人
    // 3. 循环: 移动主角, 发射子弹

    ctx = Context_Create();

    InitWindow(640, 360, "Game");

    SetTargetFPS(60);

    // ==== Enter ====
    B_Game_Enter(ctx);

    // ==== Tick ====
    while (!WindowShouldClose()) {

        float dt = GetFrameTime();

        B_Game_Tick(ctx, dt);

        // 开始绘制
        BeginDrawing();

        // 用一种颜色清空背景
        ClearBackground(RAYWHITE);

        B_Game_Draw(ctx);

        // 结束绘制
        EndDrawing();
    }

    Context_Free(ctx);

    CloseWindow();

    return 0;
}