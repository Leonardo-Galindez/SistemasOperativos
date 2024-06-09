/* kbdread.c  -  kbdread */

#include <xinu.h>
#include <mouse.h>
//PARTE ALTA
/*------------------------------------------------------------------------
 * kbdread  -  Read the status of the keyboard driver
 *------------------------------------------------------------------------
 */
devcall kbdread(
	struct dentry *devptr, /* Entry in device switch table	*/
	char *buffer,		   /* Address of buffer            */
	uint32 count		   /* Length of buffer             */
)
{
	return OK;
}
