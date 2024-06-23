#include "../include/raylib.h"
#include <stdio.h>
#include <stdlib.h>
#include "E_Role.h"
#include "Factory.h"

int main() {

    // 实体: 生成
    E_Role* role = Factory_Role(1, (Vector2){400, 200}, (Vector2){40, 40}, RED, 5.0f);

    InitWindow(640, 360, "Game");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {

        // 开始绘制
        BeginDrawing();

        // 用一种颜色清空背景
        ClearBackground(RAYWHITE);

        // {一个角色}{绘制}
        // {控制-谁/几个}{行为}
        DrawRectangleV(role->pos, role->size, role->color);

        // 结束绘制
        EndDrawing();

    }

    free(role);

    CloseWindow();

    return 0;
}