#pragma once

#include <stdbool.h>
#include <linmath.h>
#include "physics.h"
#include "type.h"

typedef struct entity
{
	size_t body_id;
	size_t animation_id;
	bool is_active;
	vec2 sprite_offset;
} Entity;

void entity_init(void);
size_t entity_create(vec2 position, vec2 size, vec2 sprite_offset, vec2 velocity, u8 collision_layer, u8 collision_mask, bool is_kinematic, size_t animation_id, On_Hit on_hit, On_Hit_Static on_hit_static);
Entity *entity_get(size_t id);
size_t entity_count();
void entity_reset();
void entity_damage(size_t entity_id, u8 amount);
void entity_destroy(size_t entity_id);