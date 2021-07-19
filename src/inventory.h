
#ifndef _INVENTORY_H
#define _INVENTORY_H

#include "sound/SoundManager.h"

#define MAXLISTLEN 100

struct stSelector
{
  uint8_t flashstate, animtimer;

  int spacing_x, spacing_y;
  int cursel, lastsel;
  int sprite;
  int nitems;
  NXE::Sound::SFX sound;
  int rowlen;

  int scriptbase;
  int items[MAXLISTLEN];
};

struct stInventory
{
  int x, y, w, h;

  stSelector armssel;
  stSelector itemsel;
  stSelector *curselector;

  char lockinput;
};

bool inventory_init(int param);
void inventory_tick(void);
int RefreshInventoryScreen(void);
void UnlockInventoryInput(void);
void DrawInventory(void);

enum INVENTORY
{
  ITEM_ARTHURS_KEY = 1,
  ITEM_MAP_SYSTEM = 2,
  ITEM_STANTAS_KEY = 3,
  ITEM_SILVER_LOCKET = 4,
  ITEM_BEAST_FANG = 5,
  ITEM_LIFE_CAPSULE = 6,
  ITEM_ID_CARD = 7,
  ITEM_JELLYFISH_JUICE = 8,
  ITEM_RUSTY_KEY = 9,
  ITEM_GUM_KEY = 10,
  ITEM_GUM_BASE = 11,
  ITEM_CHARCOAL = 12,
  ITEM_EXPLOSIVE = 13,
  ITEM_PUPPY = 14,
  ITEM_LIFE_POT = 15,
  ITEM_CUREALL = 16,
  ITEM_CLINIC_KEY = 17,
  ITEM_BOOSTER08 = 18,
  ITEM_ARMS_BARRIER = 19,
  ITEM_TURBOCHARGE = 20,
  ITEM_AIRTANK = 21,
  ITEM_COUNTER = 22,
  ITEM_BOOSTER20 = 23,
  ITEM_MIMIGA_MASK = 24,
  ITEM_TELEPORTER_KEY = 25,
  ITEM_SUES_LETTER = 26,
  ITEM_CONTROLLER = 27,
  ITEM_BROKEN_SPRINKLER = 28,
  ITEM_SPRINKLER = 29,
  ITEM_TOW_ROPE = 30,
  ITEM_CLAY_FIGURE_MEDAL = 31,
  ITEM_LITTLE_MAN = 32,
  ITEM_MUSHROOM_BADGE = 33,
  ITEM_MA_PIGNON = 34,
  ITEM_CURLYS_UNDERWEAR = 35,
  ITEM_ALIEN_MEDAL = 36,
  ITEM_CHACOS_LIPSTICK = 37,
  ITEM_WHIMSICAL_STAR = 38,
  ITEM_IRON_BOND = 39
};

#endif
