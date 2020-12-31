struct HoleInfo
{
  const char * fileName; // glf_course_%s
  unsigned int coursePar;
  unsigned int holeBits; // Controls things like which skybox to use, ambient noises, etc
  float unknown[3];
  float unknown[3];
};

// Maybe an enum but I couldn't get the right syntax
namespace type
{
    const int HOLE_SIZE = 28;
}

const int PLAYER_SIZE = 4;

// "GetInstance()"
void RegistTee();

// assert(id < HOLE_SIZE), also looks like it calls GetHolePar
void GetStrokePar(void *this_ptr, unsigned int id);
void GetHolePar();

void CheckSpecial();

// "0 < max && max <= type::HOLE_SIZE"
void random();

// id < HOLE_SIZE
HoleInfo GetHoleInfo(unsigned int id);

// Resort's main golf GOBJ uses functions to get/set values,
// and I believe that is what the following is used for.
// "_mode < glf::STROKE_SIZE"
void SetParam();

// Although this is in RPGlfConfig.cpp, I believe this is unique to Club,
// as Club refers to its players as "Members".
// Additionally, from the context below, we can assume that this function deals with players.
// "id < PLAYER_SIZE"
void GetMemberInfo(void *this_ptr, unsigned int id);

// Not sure what this does exactly.
void GetStrokeTotal(void *this_ptr, unsigned int id);

// "id < PLAYER_SIZE"
// FUN_02264e90("id[%d] score[%d]",param_2,param_3) reveals the argument names for SetStrokeScore.
void SetStrokeScore(void *this_ptr, unsigned int id, unsigned int score);
void GetStrokeScore(void *this_ptr, unsigned int id, unsigned int unknown);

// "id < PLAYER_SIZE"
void AddChipIn(void *this_ptr, unsigned int unknown, unsigned int id);
void GetChipIn(void *this_ptr, unsigned int id);

// "id < PLAYER_SIZE"
// I think this is for the player tutorial value used in Resort,
// which gets increased when the player watches through and/or skips the tutorial.
void AddTutorial(void *this_ptr, unsigned int id, int unknown);
void GetTutorial(void *this_ptr, unsigned int id);

/*
if (*unk2 == 8)
{
    OSReport("dir != RPGlfDefine::MAX_WIND_DIV");
}
*/
void GetWind(void *this_ptr, unsigned int *unk1, unsigned int *dir);

// Calls a function that gets some pointer from the this object.
// That pointer, named "p", must equal nullptr or an assert is triggered.
// Returns p[unknown], with p's structure being 0x34 in size per index.
void GetHoleData(void *this_ptr, int unknown);

// Same as GetHoleData, except this returns p[unk2],
// with p's structure being 0x8 in size.
void GetPinPos(void *this_ptr, int unk1, int unk2);

// Unique to WSC I believe (see GetMemberInfo).
// Relies on RPGlfPlayerManager.cpp->GetPlayer()
void GetMemberID();

// "GetInstance()"
void GetHoleName();

// "GetInstance()"
void GetAnim();

// "GetInstance()"
void GetHoleType();