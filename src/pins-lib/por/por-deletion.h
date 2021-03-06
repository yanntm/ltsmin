#ifndef DELETION_POR
#define DELETION_POR

#include <stdlib.h>
#include <pins-lib/por/pins2pins-por.h>

typedef struct del_ctx_s del_ctx_t;

extern del_ctx_t   *del_create (por_context* ctx);

extern void         del_por (del_ctx_t *delctx, bool prune_includes);

extern int          del_por_all (model_t self, int *src, TransitionCB cb,
                                 void *user_context);

extern bool         del_is_stubborn (del_ctx_t *delctx, int group);

extern bool         del_is_stubborn_key (del_ctx_t *delctx, int group);

#endif
