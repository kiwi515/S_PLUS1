class RPGlfClub
{
    // "id < (sizeof(_model) / (sizeof(_model[0])))"
    // "!data._model_l && !data._model_r"
    void SetupModel(unsigned int id);

    void *_model;
    void * data;
};