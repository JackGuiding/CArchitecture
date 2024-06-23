#ifndef CONTEXT_H__
#define CONTEXT_H__

#include "E_Role.h"
#include "Repo_Role.h"
#include "M_Input.h"

// 上下文: 数据中心, 模块入口
typedef struct Context {

    float fixInterval;
    float fixTimer;

    // 仓库
    Repo_Role *repo_role;

    // 模块
    M_Input *input;

} Context;

// 创建
Context* Context_Create();

// 释放
void Context_Free(Context* context);

#endif