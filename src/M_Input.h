#ifndef M_INPUT_H__
#define M_INPUT_H__

#include "import.h"

// M - Manager 管理器
typedef struct M_Input {
    Vector2 moveAxis;
} M_Input;

M_Input* M_Input_Create();
void M_Input_Free(M_Input *input);

void M_Input_Tick(M_Input *input, float dt);

#endif