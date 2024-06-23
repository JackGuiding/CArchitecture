#include "B_Game.h"

void B_Game_Enter(Context *ctx) {
    // 生成主角
    printf("Spawn Role\r\n");
}

void B_Game_Tick(Context *ctx, float deltaTime) {
    printf("B_Game_Tick\n");
}

void B_Game_Draw(Context *ctx) {
    printf("B_Game_Draw\n");
}

void B_Game_Exit(Context *ctx) {
    printf("B_Game_Exit\n");
}