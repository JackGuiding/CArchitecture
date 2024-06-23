#include "Context.h"

#include <stdlib.h>

Context* Context_Create() {
    // 上下文自身
    Context* ctx = (Context*)malloc(sizeof(Context));

    // 仓库
    ctx->repo_role = Repo_Role_Create();

    // 模块
    ctx->input = M_Input_Create();

    return ctx;
}

void Context_Free(Context* context) {
    Repo_Role_Free(context->repo_role);
    M_Input_Free(context->input);
    free(context);
}