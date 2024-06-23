#include "M_Input.h"

M_Input* M_Input_Create() {
    M_Input *input = (M_Input*)malloc(sizeof(M_Input));
    input->moveAxis = (Vector2){0, 0};
    return input;
}

void M_Input_Free(M_Input *input) {
    free(input);
}

void M_Input_Tick(M_Input *input, float dt) {

    input->moveAxis = (Vector2){0, 0};

    if (IsKeyDown(KEY_W)) {
        input->moveAxis.y = -1;
    } else if (IsKeyDown(KEY_S)) {
        input->moveAxis.y = 1;
    }

    if (IsKeyDown(KEY_A)) {
        input->moveAxis.x = -1;
    } else if (IsKeyDown(KEY_D)) {
        input->moveAxis.x = 1;
    }

}