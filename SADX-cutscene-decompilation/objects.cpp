#include "SADXModLoader.h"

//List of object pointers and what the game puts in them.
ObjectMaster* B_EME;					//Chaos Emerald: Blue
ObjectMaster* B_OUT;					//Fadeout
ObjectMaster* BALL;						//Tikal ball in EV0001
ObjectMaster* BLACK;					//Black Tint+Fadeout
ObjectMaster* BLACK2;					//Black Tint+Fadeout
ObjectMaster* BLACKOUT;					//Fadein
ObjectMaster* BOY;						//NPC
ObjectMaster* BOY2;						//NPC
ObjectMaster* BOYS_A;					//NPC
ObjectMaster* BROKEN_EGG;				//Eggman dust effect
ObjectMaster* BROKEN_EGG2;				//Eggman dust effect
ObjectMaster* BROKEN_EGG4;				//Eggman dust effect
ObjectMaster* C_EME_P;					//Chaos Emerald: Purple
ObjectMaster* CAP_01;					//Capture beams used by Eggman
ObjectMaster* cap1;						//Capture beam used by Eggman outisde Casinopolis
ObjectMaster* CAR;						//NPC Car
ObjectMaster* CAR2;						//NPC Car
ObjectMaster* CAR3;						//NPC Car
ObjectMaster* CAR4;						//NPC Car
ObjectMaster* CHA;						//Tikal's Chao
ObjectMaster* CHA2;						//Tikal's Chao
ObjectMaster* CHA3;						//Tikal's Chao
ObjectMaster* CHA4;						//Tikal's Chao
ObjectMaster* CHA5;						//Tikal's Chao
ObjectMaster* CHA6;						//Tikal's Chao
ObjectMaster* CHA7;						//Tikal's Chao
ObjectMaster* CHA8;						//Tikal's Chao
ObjectMaster* CHA9;						//Tikal's Chao
ObjectMaster* CHA10;					//Tikal's Chao
ObjectMaster* CHAOS;					//Flash for Chaos 2>4 Transformation
ObjectMaster* EC_KAGE;					//Egg Carrier's shadow in kidnap cutscene
ObjectMaster* egg_amy;					//ZERO holding Amy
ObjectMaster* emerald;					//Chaos Emerald: White
ObjectMaster* ev_chaos0;				//Event Chaos
int eq_saved;							//Check upgrades are saved in Tails' flashback
short equipment;						//Stored upgrade for Tails' flashback
ObjectMaster* FAT;						//NPC
ObjectMaster* FAT_A;					//NPC
ObjectMaster* FAT_B;					//NPC
ObjectMaster* FAT2;						//NPC
ObjectMaster* FLASH;					//Flashing light effect
ObjectMaster* Frog;						//Froggy
ObjectMaster* G_EME;					//Chaos Emerald: Green
ObjectMaster* GIRL;						//NPC
ObjectMaster* GIRL2;					//NPC
ObjectMaster* HAND_1;					//Eggman's claw
ObjectMaster* HAND_2;					//Eggman's claw
ObjectMaster* HAND_3;					//Eggman's claw
ObjectMaster* HELI_01;					//Police Helicopter
ObjectMaster* hogel;					//Fake skybox
ObjectMaster* IWA;						//Egg Viper Debris
ObjectMaster* IWA2;						//Egg Viper Debris
ObjectMaster* IWA3;						//Egg Viper Debris
ObjectMaster* KOTORI;					//Amy's bird
ObjectMaster* KOUKYU;					//Tikal ball
ObjectMaster* KURAYAMI;					//Fadeout
ObjectMaster* LADY_A;					//NPC
ObjectMaster* LADY_B;					//NPC
ObjectMaster* LADY_C;					//NPC
ObjectMaster* LADY;						//NPC
ObjectMaster* LADY2;					//NPC
ObjectMaster* Mhand;					//Eggman's claw
ObjectMaster* NY_SKY;					//Fake skybox
ObjectMaster* obj_decoy;				//Target point for cameras and heads.
ObjectMaster* obj_ver2_wing;			//Amy's bird
ObjectMaster* obj_wing1;				//Amy's bird
ObjectMaster* OYAJI_A;					//NPC
ObjectMaster* OYAJI_B;					//NPC
ObjectMaster* OYAJI_C;					//NPC
ObjectMaster* OYAJI;					//NPC
ObjectMaster* OYAJI2;					//NPC
ObjectMaster* p_Chaos0Task;				//Event Chaos
ObjectMaster* PLANE;					//Tornado 1
ObjectMaster* PAT_01;					//Police car
ObjectMaster* PAT_02;					//Police car
ObjectMaster* PAT_03;					//Police car
ObjectMaster* PAT_04;					//Police Car
ObjectMaster* PL_NOR_01;				//SS Police
ObjectMaster* PL_NOR_02;				//SS Police
ObjectMaster* PL_NOR_03;				//SS Police
ObjectMaster* PL_NOR_04;				//SS Police
ObjectMaster* PL_NOR_05;				//SS Police
ObjectMaster* PL_NOR_07;				//SS Police
ObjectMaster* PL_NOR_08;				//SS Police
ObjectMaster* pmiles;					//Tails in prototype plane
ObjectMaster* PURPLE;					//Chaos Emerald: Purple
ObjectMaster* R_EME;					//Chaos Emerald: Red
ObjectMaster* RED;						//Chaos Emerald: Red
ObjectMaster* SEPIA;					//Sepia overlay in Tails' flashback
ObjectMaster* SMOKE_01;					//Smoke effect
ObjectMaster* SMOKE_02;					//Smoke Effect
ObjectMaster* SMOKE;					//Smoke Effect
ObjectMaster* SMOKE2;					//Smoke Effect
ObjectMaster* SONIC_JUMP;				//Sky floor
ObjectMaster* SONIC_SKY_2;				//Sky floor
ObjectMaster* SONIC_02SKY;				//Sky floor
ObjectMaster* suki1_obj;				//Borders when Eggman spots Tails' purple emerald.
ObjectMaster* suki2_obj;				//Borders when Eggman spots Tails' purple emerald.
ObjectMaster* suki1_point;				//Borders when Eggman spots Tails' purple emerald.
ObjectMaster* suki2_point;				//Borders when Eggman spots Tails' purple emerald.
ObjectMaster* task_skywalk;				//Sky floor
ObjectMaster* task_skywalk2;			//Sky floor
ObjectMaster* WING;						//Amy's bird
ObjectMaster* WHITE;					//White fadeout
ObjectMaster* TALES_STEP;				//Sky floor
ObjectMaster* TAMA_01;					//Bullet
ObjectMaster* TAMA_02;					//Bullet
ObjectMaster* TAMA_03;					//Bullet
ObjectMaster* TAMA_04;					//Bullet
ObjectMaster* TAMA_05;					//Bullet
ObjectMaster* TAMA_06;					//Bullet
ObjectMaster* TAMA_07;					//Bullet
ObjectMaster* TAMA_08;					//Bullet
ObjectMaster* TAMA_09;					//Bullet
ObjectMaster* TAMA_10;					//Bullet
ObjectMaster* TAMA_11;					//Bullet
ObjectMaster* TAMA_12;					//Bullet
ObjectMaster* TAMA_13;					//Bullet
ObjectMaster* TAMA_14;					//Bullet
ObjectMaster* TAMA_15;					//Bullet
ObjectMaster* TAMA_16;					//Bullet
ObjectMaster* TAMA_17;					//Bullet
ObjectMaster* TAMA_18;					//Bullet
ObjectMaster* TAMA_19;					//Bullet
ObjectMaster* TAMA_20;					//Bullet
ObjectMaster* TEPODON;					//Eggman's Missile
ObjectMaster* tikal;					//Tikal ball
ObjectMaster* tikalb;					//Tikal ball
ObjectMaster* TR2;						//Tornado 2
ObjectMaster* TR2B;						//Tornado 2 post-transformation
ObjectMaster* zan;						//Probably Tails' crashed prototype plane.

//Character objects for the player and NPCs.
ObjectMaster* player;
ObjectMaster* sonic;
ObjectMaster* tails;
ObjectMaster* knuckles;
ObjectMaster* amy;
ObjectMaster* big;
ObjectMaster* e102;
ObjectMaster* eggcarrier;
ObjectMaster* eggman;
ObjectMaster* eggmoble;
ObjectMaster* zero;

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
*/
int enableUnusedCode = 0;