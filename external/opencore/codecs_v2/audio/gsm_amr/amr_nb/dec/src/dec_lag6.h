

#ifndef dec_lag6_h
#define dec_lag6_h "$Id $"


#include "typedef.h"

/*--------------------------------------------------------------------------*/
#ifdef __cplusplus
extern "C"
{
#endif

    /*----------------------------------------------------------------------------
    ; MACROS
    ; Define module specific macros here
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; DEFINES
    ; Include all pre-processor statements here.
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; EXTERNAL VARIABLES REFERENCES
    ; Declare variables used in this module but defined elsewhere
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; SIMPLE TYPEDEF'S
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; ENUMERATED TYPEDEF'S
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; STRUCTURES TYPEDEF'S
    ----------------------------------------------------------------------------*/

    /*----------------------------------------------------------------------------
    ; GLOBAL FUNCTION DEFINITIONS
    ; Function Prototype declaration
    ----------------------------------------------------------------------------*/
    void Dec_lag6(
        Word16 index,      /* input : received pitch index           */
        Word16 pit_min,    /* input : minimum pitch lag              */
        Word16 pit_max,    /* input : maximum pitch lag              */
        Word16 i_subfr,    /* input : subframe flag                  */
        Word16 *T0,        /* in/out: integer part of pitch lag      */
        Word16 *T0_frac,   /* output: fractional part of pitch lag   */
        Flag   * pOverflow  /* o : Flag set when overflow occurs     */
    );

    /*----------------------------------------------------------------------------
    ; END
    ----------------------------------------------------------------------------*/
#ifdef __cplusplus
}
#endif

#endif /* _DEC_LAG_6_H_ */

