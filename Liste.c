//* Liste.c

#include "Liste.h"
#include "stdlib.h"


List_cdc* creeListe (void)
{

	List_cdc* root = malloc ( sizeof *root );
	if ( root != NULL ) 
	{
	
		root->prec = root ;
		root->suiv = root ; 

	}	
	
	return root;

}

void Suivant ()
{

	if ( root != NULL )
	{
		
		root->prec = root ;
		root->suiv = root ;
		
	}

	else 
	{
		printf("\n la racine est NULL ou il y a une erreur \n");
	}
}

	
	if ( new_m != NULL)
	{
	
		new_m->val = val;
		new_m->prec = m->prec;
		new_m->suiv = m;
		
		m->prec->suiv = new_m;
		m->prec = new_m;
	}

}


