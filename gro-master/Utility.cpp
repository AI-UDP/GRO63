/////////////////////////////////////////////////////////////////////////////////////////
//
// gro is protected by the UW OPEN SOURCE LICENSE, which is summarized here.
// Please see the file LICENSE.txt for the complete license.
//
// THE SOFTWARE (AS DEFINED BELOW) AND HARDWARE DESIGNS (AS DEFINED BELOW) IS PROVIDED
// UNDER THE TERMS OF THIS OPEN SOURCE LICENSE (“LICENSE”).  THE SOFTWARE IS PROTECTED
// BY COPYRIGHT AND/OR OTHER APPLICABLE LAW.  ANY USE OF THIS SOFTWARE OTHER THAN AS
// AUTHORIZED UNDER THIS LICENSE OR COPYRIGHT LAW IS PROHIBITED.
//
// BY EXERCISING ANY RIGHTS TO THE SOFTWARE AND/OR HARDWARE PROVIDED HERE, YOU ACCEPT AND
// AGREE TO BE BOUND BY THE TERMS OF THIS LICENSE.  TO THE EXTENT THIS LICENSE MAY BE
// CONSIDERED A CONTRACT, THE UNIVERSITY OF WASHINGTON (“UW”) GRANTS YOU THE RIGHTS
// CONTAINED HERE IN CONSIDERATION OF YOUR ACCEPTANCE OF SUCH TERMS AND CONDITIONS.
//
// TERMS AND CONDITIONS FOR USE, REPRODUCTION, AND DISTRIBUTION
//
//

#include <math.h>
#include <stdlib.h>

float max ( float a, float b ) {

  if ( a < b ) 
    return b;
  else
    return a;

}

float min ( float a, float b ) {

  if ( a < b ) 
    return a;
  else
    return b;

}

float mag ( float a, float b ) {

  return sqrt ( a*a + b*b );

}


float mag2 ( float a, float b ) {

  return a*a + b*b;

}

float dist ( float x1, float y1, float x2, float y2 ) {

  return mag ( x1-x2, y1-y2 );

}

float random ( float min, float max ) {

  return (max-min)*0.0001*(rand()%10000) + min;

}

float rand_exponential ( float lambda ) {

  return - log ( random(0.0001,1) ) / lambda;

}
