#pragma once

#include "../array_list.h"
#include "../type.h"

typedef struct physics_state_internal
{
	Array_List *body_list;
} Physics_State_Internal;