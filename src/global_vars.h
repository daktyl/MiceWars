#ifndef MICEWARS_GLOBAL_VARS_H
#define MICEWARS_GLOBAL_VARS_H

enum {  gravity = 0,
    movement = 1,
    left = -1,
    stay = 0,
    right = 1,
    up = -1,
    down = 1,
    shotgun = 0,
    bazooka = 1,
    grenade = 2,
    cheesebomb = 3,
    mousetrap = 4,
    gameplay = 0,
    menu = 1    };

#define BLACK                   0x000000
#define GREEN                   0x95C355
#define BLUE                    0x3885E7
#define YELLOW                  0XFFFF33
#define MICE_WIDTH              20
#define MICE_HEIGHT             24

#define AMOUNT_OF_CHEESE_HOLES  18
#define RIVER_DIVIDER           7
#define RADIUS_CROSSHAIR        70
#define CROSSHAIR_WIDTH         20
#define CROSSHAIR_IMG           "img/Crosshair.png"
#define CROSSHAIR_SPEED_MUL     150
#define CROSSHAIR_SIM_TOLERANCE 5
#define CROSSHAIR_BOUNDARY      50

#define MOUSE_IMG               "img/Mouse(30x37)"
#define MOUSE_IMG_EXTENSION     ".png"
#define MOUSE_MOVEPOINTS        500
#define MICE_SPEED_MUL          70 // previously 100
#define GRAVITY_MUL             400 // previously 150
#define HILL_OVERCOME_PIXELS    20

#define AI_STUCK_COUNT          20
#define AI_MAX_STUCK_TIMES      10
#define AI_SAFETY_RADIUS        5

// NOTICATIONS' SPECIFICATIONS
#define NOTIFICATION_HP_OFFSET  20
#define NOTIFICATION_HP_WIDTH   25
#define NOTIFICATION_HP_HEIGHT  20
#define NOTIFICATIONBOX_FONT    "font/OpenSans-Bold.ttf"
#define NOTIFICATIONBOX_FONTSIZE 20

// WEAPONS' SPECIFICATIONS
#define WEAPON_X_OFFSET         0
#define WEAPON_Y_OFFSET         7
#define WEAPON_WIDTH            20
#define WEAPON_HEIGHT           15

#define BULLET_IMG              "img/Bullet.png"
#define BULLET_WIDTH            10
#define BULLET_HEIGHT           5
#define BULLET_SPEED_MUL        100

#define SHOTGUN_IMG             "img/Shotgun.png"
#define SHOTGUN_DAMAGE          30
#define SHOTGUN_RANGE           25

#define BAZOOKA_IMG             "img/Bazooka.png"
#define BAZOOKA_DAMAGE          40
#define BAZOOKA_RANGE           40
#define BAZOOKA_WEIGHT          15

#define GRENADE_IMG             "img/Granade.png"
#define GRENADE_DAMAGE          30
#define GRENADE_RANGE           40
#define GRENADE_WEIGHT          10
#define GRENADE_TIMER           5

#define CHEESE_IMG              "img/Bazooka.png"
#define CHEESE_DAMAGE           20
#define CHEESE_RANGE            70
#define CHEESE_WEIGHT           15
#define CHEESE_TIMER            5

#define MOUSE_TRAP_IMG          "img/Bazooka.png"
#define MOUSE_TRAP_DAMAGE       30
#define MOUSE_TRAP_RANGE        0
#define MOUSE_TRAP_TRIG_RANGE   5

#define GREEN_MOUSE             "Daktyl"
#define GREEN_COLOUR            1
#define PINK_MOUSE              "Miki"
#define PINK_COLOUR             2
#define BLUE_MOUSE              "Łazarz"
#define BLUE_COLOUR             3
#define RED_MOUSE               "Ziomek"
#define RED_COLOUR              4

// BUTTONS
#define ALL_IN_B_VECTOR         14
#define B_RESUME_GAME           0
#define B_SAVE_GAME             1
#define B_LOAD_GAME             2
#define B_QUIT_GAME             3
#define B_NEW_GAME              4
#define B_START                 5
#define B_AI_HUMAN_D            6
#define B_AI_HUMAN_M            7
#define B_AI_HUMAN_L            8
#define B_AI_HUMAN_Z            9
#define P_DAKTYL                10
#define P_MIKI                  11
#define P_LAZARZ                12
#define P_ZIOMEK                13


#define SAVED_GAME              "saved_game.dat"

#endif //MICEWARS_GLOBAL_VARS_H