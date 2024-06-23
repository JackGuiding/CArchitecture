#ifndef B_GAME_H__
#define B_GAME_H__

#include "Context.h"

// B - Business 业务
void B_Game_Enter(Context *ctx);
void B_Game_Tick(Context *ctx, float deltaTime);
void B_Game_FixTick(Context *ctx, float fixdt);
void B_Game_Draw(Context *ctx);
void B_Game_Exit(Context *ctx);

#endif