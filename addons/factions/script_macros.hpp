#define GMETA(TYPE) side = 1; faction = "PMCS_B_##TYPE"; icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa"; rarityGroup = 0.5

#define UNIT_XX(IDX,POS,RANK,UNIT) class Unit##IDX## { \
	position[] = POS; \
	rank = QUOTE(RANK); \
	side = 1; \
	vehicle = QUOTE(UNIT); \
}

#define UNIT_0_POS {0,0,0}
#define UNIT_0(RANK,UNIT) UNIT_XX(0,UNIT_0_POS,RANK,UNIT)

#define UNIT_1_POS {5,-5,0}
#define UNIT_1(RANK,UNIT) UNIT_XX(1,UNIT_1_POS,RANK,UNIT)

#define UNIT_2_POS {-5,-5,0}
#define UNIT_2(RANK,UNIT) UNIT_XX(2,UNIT_2_POS,RANK,UNIT)

#define UNIT_3_POS {10,-10,0}
#define UNIT_3(RANK,UNIT) UNIT_XX(3,UNIT_3_POS,RANK,UNIT)

#define UNIT_4_POS {0,-5,0}
#define UNIT_4(RANK,UNIT) UNIT_XX(4,UNIT_4_POS,RANK,UNIT)

#define UNIT_5_POS {5,-10,0}
#define UNIT_5(RANK,UNIT) UNIT_XX(5,UNIT_5_POS,RANK,UNIT)