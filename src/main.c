#include "../include/raylib.h"
#include <stdio.h>

int main() {

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

    return 0;
}