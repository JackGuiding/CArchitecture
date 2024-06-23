#include "Context.h"

#include <stdlib.h>

Context* Context_Create() {
    Context* context = (Context*)malloc(sizeof(Context));
    context->repo_role = R_Role_Create();
    return context;
}

void Context_Free(Context* context) {
    R_Role_Free(context->repo_role);
    free(context);
}