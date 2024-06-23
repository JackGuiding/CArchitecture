#ifndef R_ROLE_H__
#define R_ROLE_H__

#include "E_Role.h"

// Repo - Repository 仓库
typedef struct Repo_Role {
    E_Role **all;
    int count; // 当前存储的数量, 当前是0个
    int capacity; // 容量, 上限能存10个
} Repo_Role;

// 创建
Repo_Role* Repo_Role_Create();

// 释放
void Repo_Role_Free(Repo_Role* r_role);

// 添加实体
void Repo_Role_Add(Repo_Role* r_role, E_Role* e_role);

// 移除实体
void Repo_Role_Remove(Repo_Role* r_role, E_Role* e_role);

// 查找实体
E_Role* Repo_Role_Get(Repo_Role* r_role, int id);

#endif