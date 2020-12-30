enum Unknown
{
    back,
    front,
    left,
    right,
    sit,
    none,
    fight,
    damaged,
    down,
    stand_up,
    performance,
    down_still,
    punch,
    play_motion,
    wobbly,
    winner,
    loser,
    wait_judge,
    wait_mitt,
    wait_ball,
    wait_sandbag,
    wait,
    initialize	
};

enum Unknown2
{
    fight,
    down,
    stand_up,
    as_is,
    fight_still,
    t_pose
};

enum Unknown3
{
    STATE_STABLE,
    STATE_KEEP,
    STATE_CHANGE,
    STATE_RECOVER
};

enum Unknown4
{
    step_free_move,
    step_attack,
    step_hold,
    step_knock_back,
    step_drunkard
};

// These are consecutive in the executable,
// but the repeating makes me think this is split somewhere
enum Unknown5
{
    none,
    straight,
    hook,
    upper,
    jab,
    straight,
    body,
    upper,
    hook,
    shadow
};
