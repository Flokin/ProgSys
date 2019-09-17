//* Liste.h

typedef struct LCDC
{
        int val;
        struct LCDC* prec;
        struct LCDC* suiv;
} List_cdc;

List_cdc* creeListe (void);
//*List_cdc* Suivant (void);
void Ajouter (List_cdc* m, int val);



