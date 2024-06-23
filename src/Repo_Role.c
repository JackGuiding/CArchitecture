#include "Repo_Role.h"
#include <stdlib.h>

Repo_Role* Repo_Role_Create() {
    Repo_Role* r_role = (Repo_Role*)calloc(1, sizeof(Repo_Role));
    r_role->all = (E_Role**)calloc(100, sizeof(E_Role*));
    return r_role;
}

void Repo_Role_Free(Repo_Role* r_role) {
    free(r_role->all);
    free(r_role);
}

// 添加实体
void Repo_Role_Add(Repo_Role* r_role, E_Role* e_role) {
    r_role->all[r_role->count] = e_role;
    r_role->count++;
}

// 移除实体
void Repo_Role_Remove(Repo_Role* r_role, E_Role* e_role) {
    for (int i = 0; i < r_role->count; i++) {
        E_Role* exist = r_role->all[i];
        if (exist->id == e_role->id) {
            // 交换
            r_role->all[i] = r_role->all[r_role->count - 1];
            r_role->count--;
            break;
        }
    }
}

// 查找实体
E_Role* Repo_Role_Get(Repo_Role* r_role, int id) {
    for (int i = 0; i < r_role->count; i++) {
        E_Role* exist = r_role->all[i];
        if (exist->id == id) {
            return exist;
        }
    }
    return NULL;
}

