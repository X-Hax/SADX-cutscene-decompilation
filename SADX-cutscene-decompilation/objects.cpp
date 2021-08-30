#include "SADXModLoader.h"

//List of object pointers and what the game puts in them.
task* AMY_SKY;					//Sky Floor
task* AL_01;					//Chao
task* AL_02;					//Chao
task* AL_03;					//Chao
task* AL_04;					//Chao
task* AL_05;					//Chao
task* AL_06;					//Chao
task* AL_07;					//Chao
task* B_EME;					//Chaos Emerald: Blue
task* B_IN;						//Fadein
task* B_OUT;					//Fadeout
task* BALL;						//Tikal ball in EV0001
task* BLACK;					//Black Tint+Fadeout
task* BLACK1;					//Black Tint+Fadeout
task* BLACK2;					//Black Tint+Fadeout
task* BLACK3;					//Black Tint+Fadeout
task* BIG_SKY;					//Sky Floor
task* bird;						//Flicky
task* bird1;					//Flicky
task* bird2;					//Flicky
task* bird3;					//Flicky
task* BLACKOUT;					//Fadein
task* bomb1;					//Explosion effect
task* bomb2;					//Explosion effect
task* BOM;						//Explosion
task* BOY;						//NPC
task* boy1;						//NPC
task* BOY2;						//NPC
task* BOYS_A;					//NPC
task* BROKEN_EGG;				//Eggman dust effect
task* BROKEN_EGG2;				//Eggman dust effect
task* BROKEN_EGG4;				//Eggman dust effect
task* C_EME_P;					//Chaos Emerald: Purple
task* C_EME_S;					//Chaos Emerald: Cyan
task* C_EME_Y;					//Chaos Emerald: Yellow
task* CAP_01;					//Capture beams used by Eggman
task* cap1;						//Capture beam
task* cap2;						//Capture beam
task* cap3;						//Capture beam
task* CAR;						//NPC Car
task* CAR02;					//NPC Car
task* CAR3;						//NPC Car
task* CAR4;						//NPC Car
task* CHA;						//Tikal's Chao
task* CHA2;						//Tikal's Chao
task* CHA3;						//Tikal's Chao
task* CHA4;						//Tikal's Chao
task* CHA5;						//Tikal's Chao
task* CHA6;						//Tikal's Chao
task* CHA7;						//Tikal's Chao
task* CHA8;						//Tikal's Chao
task* CHA9;						//Tikal's Chao
task* CHA10;					//Tikal's Chao
task* CHAO1;					//Tikal's Chao
task* CHAO2;					//Tikal's Chao
task* CHAO3;					//Tikal's Chao
task* CHAO4;					//Tikal's Chao
task* CHAO5;					//Tikal's Chao
task* CHAO6;					//Tikal's Chao
task* CHAO7;					//Tikal's Chao
task* CHAO8;					//Tikal's Chao
task* CHAO9;					//Tikal's Chao
task* CHAO10;					//Tikal's Chao
task* CHAO11;					//Tikal's Chao
task* CHAO12;					//Tikal's Chao
task* CHAO13;					//Tikal's Chao
task* CHAO14;					//Tikal's Chao
task* CHAO15;					//Tikal's Chao
task* CHAO16;					//Tikal's Chao
task* CHAOS;					//Flash for Chaos 2>4 Transformation
task* e101;						//E-101 Beta
task* E101KAI;					//E-101 Beta Mk.II
task* e103;						//E-103 Delta
task* e104;						//E-104 Epsilon
task* e105;						//E-105 Zeta
task* EC_KAGE;					//Egg Carrier's shadow in kidnap cutscene
task* egg_amy;					//ZERO holding Amy
task* emerald;					//Chaos Emerald: White
task* ev_chaos0;				//Event Chaos
int eq_saved;					//Check upgrades are saved in Tails' flashback
short equipment;				//Stored upgrade for Tails' flashback
task* FAT;						//NPC
task* FAT_A;					//NPC
task* FAT_B;					//NPC
task* FAT2;						//NPC
task* fatman_b;					//NPC
task* FLASH;					//Flashing light effect
task* Frog;						//Froggy
task* FROG;						//Froggy
task* Frog1;					//Froggy
task* Frog2;					//E-103's frog
task* Frog3;					//E-104's frog
task* Frog4;					//E-105's frog
task* G_EME;					//Chaos Emerald: Green
task* GIRL;						//NPC
task* girl1;					//NPC
task* GIRL2;					//NPC
task* HAND_1;					//Eggman's claw
task* HAND_2;					//Eggman's claw
task* HAND_3;					//Eggman's claw
task* HELI_01;					//Police Helicopter
task* hogel;					//Fake skybox
task* hoge1;					//Flashback image
task* hoge2;					//Flashback image
task* hoge3;					//Flashback image
task* hoge4;					//Flashback image
task* hoge5;					//Flashback image
task* IWA;						//Egg Viper Debris
task* IWA2;						//Egg Viper Debris
task* IWA3;						//Egg Viper Debris
task* K_NORMAL;					//Knuckles Clan
task* K_FAT;					//Knuckles Clan
task* K_TALL;					//Knuckles Clan
task* K_TALL2;					//Knuckles Clan
task* K01_EME;					//Black Chaos Emerald
task* K02_EME;					//Black Chaos Emerald
task* K03_EME;					//Black Chaos Emerald
task* K04_EME;					//Black Chaos Emerald
task* K05_EME;					//Black Chaos Emerald
task* K06_EME;					//Black Chaos Emerald
task* K07_EME;					//Black Chaos Emerald
task* K08_EME;					//Black Chaos Emerald
task* KNUCKLES_SKY;				//Sky Floor
task* KNUCKLES_2SKY;				//Sky Floor
task* KOTORI;					//Amy's bird
task* KOTORI2;					//Amy's bird
task* KOUKYU;					//Tikal ball
task* KURAYAMI;					//Fadeout
task* LADY_A;					//NPC
task* LADY_B;					//NPC
task* LADY_C;					//NPC
task* LADY;						//NPC
task* LADY2;					//NPC
task* LIGHT_L;					//Light for Eggman's fanfare
task* LIGHT_R;					//Light for Eggman's fanfare
task* Mhand;					//Eggman's claw
task* Mhand2;					//Eggman's claw
task* m_sonic;					//Metal Sonic
task* MILES_SKY;				//Sky Floor
task* MILES_2SKY;				//Sky Floor
task* NY_SKY;					//Fake skybox
//task* obj_amy;				//Amy after grabbing onto Tails.
task* obj_decoy;				//Target point for cameras and heads.
task* obj_ver1_wing;			//Amy's bird
task* obj_ver2_wing;			//Amy's bird
task* obj_wing;					//Amy's bird
task* obj_wing1;				//Amy's bird
task* obj_wing2;				//Amy's bird
task* obj_wing_p;				//bird
task* obj_wing_t;				//bird
task* object_blue;				//Chaos Emerald
task* object_green;				//Chaos Emerald
task* object_purple;			//Chaos Emerald
task* object_sky;				//Chaos Emerald
task* object_white;				//Chaos Emerald
task* object_yellow;			//Chaos Emerald
task* object_red;				//Chaos Emerald
task* ol1;						//NPC
task* oy1;						//NPC
task* oy2;						//NPC
task* OYAJI_A;					//NPC
task* OYAJI_B;					//NPC
task* OYAJI_C;					//NPC
task* OYAJI;					//NPC
task* OYAJI2;					//NPC
task* p_Chaos0Task;				//Event Chaos
task* p_fpack1;					//Amy's bag
task* p_fpack2;					//Amy's bag
task* P_EME;					//Chaos Emerald: Purple
task* PAPA;						//Pachacamac
task* PHOTO1;					//Screen tint
task* PHOTO2;					//Screen tint
task* PLANE;					//Tornado 1
task* PAT_01;					//Police car
task* PAT_02;					//Police car
task* PAT_03;					//Police car
task* PAT_04;					//Police Car
task* PL_NOR_01;				//SS Police
task* PL_NOR_02;				//SS Police
task* PL_NOR_03;				//SS Police
task* PL_NOR_04;				//SS Police
task* PL_NOR_05;				//SS Police
task* PL_NOR_07;				//SS Police
task* PL_NOR_08;				//SS Police
task* pmiles;					//Tails in prototype plane
task* PURPLE;					//Chaos Emerald: Purple
task* R_EME;					//Chaos Emerald: Red
task* RED;						//Chaos Emerald: Red
task* S_EME;					//Chaos Emerald: White
task* SEPIA;					//Sepia overlay in Tails' flashback
char seqstore;					//
char seqsaved;					//
task* shadow;					//Dark egg carrier shadow overlay
task* SIRO;						//Fade to white
task* SMOKE_01;					//Smoke effect
task* SMOKE_02;					//Smoke Effect
task* SMOKE;					//Smoke Effect
task* SMOKE1;					//Smoke Effect
task* SMOKE2;					//Smoke Effect
task* SONIC_JUMP;				//Sky floor
task* SONIC_SKY;				//Sky floor
task* SONIC_02SKY;				//Sky floor
task* SONIC_2SKY;				//Sky floor
task* SONIC_3SKY;				//Sky floor
task* SONIC_4SKY;				//Sky floor
task* suki1_obj;				//Borders when Eggman spots Tails' purple emerald.
task* suki2_obj;				//Borders when Eggman spots Tails' purple emerald.
task* suki1_point;				//Borders when Eggman spots Tails' purple emerald.
task* suki2_point;				//Borders when Eggman spots Tails' purple emerald.
task* SUPER_S;					//Flash uring Super Sonic transformation.
task* task_frame;				//Flashback image
task* task_icm;					//Flashback image
task* task_ichimaie;			//Flashback image
task* task_recollect0;			//Amy flashback
task* task_recollect1;			//Amy flashback
task* task_skywalk;				//Sky floor
task* task_skywalk2;			//Sky floor
task* task_skywalk_3;			//Sky floor
task* W_EME;					//Chaos Emerald: White
task* W_OUT;					//White fadein
task* WING;						//Amy's bird
task* WHITE;					//White fadeout
task* WHITE2;					//White fadeout
task* TALES_STEP;				//Sky floor
task* TAMA_01;					//Bullet
task* TAMA_02;					//Bullet
task* TAMA_03;					//Bullet
task* TAMA_04;					//Bullet
task* TAMA_05;					//Bullet
task* TAMA_06;					//Bullet
task* TAMA_07;					//Bullet
task* TAMA_08;					//Bullet
task* TAMA_09;					//Bullet
task* TAMA_10;					//Bullet
task* TAMA_11;					//Bullet
task* TAMA_12;					//Bullet
task* TAMA_13;					//Bullet
task* TAMA_14;					//Bullet
task* TAMA_15;					//Bullet
task* TAMA_16;					//Bullet
task* TAMA_17;					//Bullet
task* TAMA_18;					//Bullet
task* TAMA_19;					//Bullet
task* TAMA_20;					//Bullet
task* TEPODON;					//Eggman's Missile
task* tikal;					//Tikal ball
task* TIKAL_BALL;				//Tikal ball
task* TIKAL_SKY;				//Sky Floor
task* tikalb;					//Tikal ball
task* Tik;						//Tikal ball
task* TR2;						//Tornado 2
task* TR2B;						//Tornado 2 post-transformation
task* Y_EME;					//Chaos Emerald: Yellow
task* zan;						//Probably Tails' crashed prototype plane.

//Character objects for the player and NPCs.
task* player;
task* sonic;
task* tails;
task* knuckles;
task* amy;
task* big;
task* e102;
task* eggcarrier;
task* eggman;
task* eggmoble;
task* zero;

/*Enable various unused code:
* EV000B: Unused dust effect
* EV0009: There's a skip in the camera sequence at the beginning due to a text box that was removed after the original JP version. (EV_Msg- functions force the event to wait 20 frames).
			Set to 1 to fix the camera sequence.
			Set to 2 to do the above as well as restore the text box (As "?" to be compatible with all languages).
* EV001A: Tails and Gamma aren't created properly (Tried to get objects on the same frame as their creation)
* EV0039: Tails' version of EV000B.
* EV003E: Remove the Jet Anklet instead of the Rhythm Badge in Tails' flashback and enable two COverlaySetPriority calls.
* EV004B: Tails' version of EV001A.
* EV0080: Knuckles has an eyelid animation when he gets woken up. The line points to "0" instead of him though, so it doesn't do anything.
* EV0091: Knuckles does an animation when viewing the small Egg Carrier inside the emerald but it can't be seen normally because he slides off the pedestal and out of view before it can start.
* EV009A: Knuckles has mouth movement during "I still can't figure out that creepy monster." that isn't seen because the running animation he's doing doesn't support mouth movement.
* EV00C7: Gamma's ending spawns and has code related to Amy's flicky but it's invisible.
*/
int enableUnusedCode = 0;