#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <gsl/gsl_matrix_double.h>
#include <gsl/gsl_linalg.h>
#include <math.h>
#include "symsec.h"

/* Code to integrate orbit-averaged equations of motion
   for a multiple stellar/planetary system using modern
   

   Author: Diego J Munoz  (Northwestern U)
   Created: 2019-03-29
   

 */

void init();


void main()
{

  init();

  advance_ivp();

}


void init()
{


}
