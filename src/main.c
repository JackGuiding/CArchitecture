#include "../include/raylib.h"
#include <stdio.h>
#include <stdlib.h>
#include "E_Role.h"
#include "Factory.h"
#include "Context.h"

// 全局上下文
Context* ctx;

int main() {

    ctx = Context_Create();

    InitWindow(640, 360, "Game");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        // 开始绘制
        BeginDrawing();

        // 用一种颜色清空背景
        ClearBackground(RAYWHITE);

        // 结束绘制
        EndDrawing();

    }

    Context_Free(ctx);

    CloseWindow();

    return 0;
}