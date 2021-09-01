#pragma bank 5
#include "data_ptrs.h"
#include "banks.h"

#ifdef __EMSCRIPTEN__
const unsigned int bank_data_ptrs[] = {
0,0,0,0,0,0,&bank_6_data
};
#endif

const BankPtr tileset_bank_ptrs[] = {
{0x06,0x1156},{0x06,0x1857}
};

const BankPtr background_bank_ptrs[] = {
{0x06,0x1F48},{0x06,0x20B3},{0x06,0x221E},{0x06,0x2389}
};

const BankPtr background_attr_bank_ptrs[] = {
{0x06,0x2CD6},{0x06,0x2E3E},{0x06,0x2FA6},{0x06,0x310E}
};

const BankPtr palette_bank_ptrs[] = {
{0x06,0x1ED8},{0x06,0x1EE0},{0x06,0x1EE8},{0x06,0x1F18},{0x06,0x1F48}
};

const BankPtr sprite_bank_ptrs[] = {
{0x06,0x24F4},{0x06,0x2675}
};

const BankPtr scene_bank_ptrs[] = {
{0x06,0x3276},{0x06,0x32A8},{0x06,0x32BE},{0x06,0x32D4}
};

const BankPtr collision_bank_ptrs[] = {
{0x06,0x2736},{0x06,0x289E},{0x06,0x2A06},{0x06,0x2B6E}
};

const BankPtr avatar_bank_ptrs[] = {
{0x00,0x0000}
};

const unsigned int music_tracks[] = {
0x4B0A, 0
};

const unsigned char music_banks[] = {
7, 0
};

unsigned int start_scene_index = 0x0000;
int start_scene_x = 0x0040;
int start_scene_y = 0x0040;

char start_scene_dir_x = 0;
char start_scene_dir_y = -1;
unsigned int start_player_sprite = 0;
unsigned char start_player_move_speed = 1;
unsigned char start_player_anim_speed = 4;
WORD plat_min_vel = 304;
WORD plat_walk_vel = 6400;
WORD plat_run_vel = 10496;
WORD plat_walk_acc = 152;
WORD plat_run_acc = 228;
WORD plat_dec = 208;
WORD plat_jump_vel = 16384;
WORD plat_grav = 1792;
WORD plat_hold_grav = 512;
WORD plat_max_fall_vel = 20000;
UBYTE topdown_grid = 8;
UBYTE fade_style;
UBYTE *engine_fields_addr = &plat_min_vel;

unsigned char script_variables[500] = { 0 };
