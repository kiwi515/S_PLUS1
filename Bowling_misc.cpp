enum WalkState
{
    WALK_LEG,
    WALK_ARM_BACK,
    WALK_ARM_FRONT,
    WAIT_LEG,
    WAIT_ARM,
    WAIT_NO_SYNC
};

// Perhaps related to the crowd's reaction,
// when the ball is thrown backwards?
enum CrowdReaction
{
    STATE_BACKTHROW,
    STATE_WAIT,
    // Onomatopoeia for "rabbit hop".
    // This makes sense if the explanation above is correct.
    STATE_PYONPYON,
    // "Uneasy/nervous"
    STATE_SOWASOWA
};

