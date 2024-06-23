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

    // ==== Init ====
    ctx = Context_Create();

    InitWindow(1280, 720, "Game");

    // SetTargetFPS(1000);

    // ==== Enter ====
    // 登录页
    B_Game_Enter(ctx);

    // ==== Tick ====
    while (!WindowShouldClose()) {

        float dt = GetFrameTime();

        // 伪代码 if login.click => B_Game_Enter(ctx);

        // 逻辑
        B_Game_Tick(ctx, dt);

        // 开始绘制
        BeginDrawing();

        // 用一种颜色清空背景
        ClearBackground(RAYWHITE);

        B_Game_Draw(ctx);

        DrawFPS(10, 10);

        // 结束绘制
        EndDrawing();
    }

    Context_Free(ctx);

    CloseWindow();

    return 0;
}